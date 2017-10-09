#include <gtest/gtest.h>
#include "string.h"

TEST(string_length,normal_strings) {
	EXPECT_EQ(1,my_strlen((char *)"a"));
	EXPECT_EQ(3,my_strlen((char *)"abc"));
	EXPECT_EQ(3,my_strlen((char *)"ABC"));
	EXPECT_EQ(10,my_strlen((char *)"0123456789"));
	EXPECT_EQ(12,my_strlen((char *)"01234ab56789"));
}
/**********************************************/
TEST(string_length,special_strings) {
	EXPECT_EQ(1,my_strlen((char *)" "));
	EXPECT_EQ(1,my_strlen((char *)"\n"));
	EXPECT_EQ(1,my_strlen((char *)"\377"));
	EXPECT_EQ(6,my_strlen((char *)"€$£"));
	EXPECT_EQ(3,my_strlen((char *)"&@/"));
	EXPECT_EQ(2,my_strlen((char *)"\\\\"));
}
/**********************************************/
TEST(string_length,scandi_strings) {
	EXPECT_EQ(2,my_strlen((char *)"ä"));
	EXPECT_EQ(6,my_strlen((char *)"äöå"));
	EXPECT_EQ(6,my_strlen((char *)"ÄÖÅ"));
	EXPECT_EQ(2,my_strlen((char *)"Ä"));
	EXPECT_EQ(10,my_strlen((char *)"ÄÄÄÄÄ"));
}
/**********************************************/
/**********************************************/
/**********************************************/
TEST(string_copy,normal_strings) {
	char string1[100]="";
	char string2[100]="";

	strcpy(string1,"abc");
	my_strcpy(string1,string2);
	ASSERT_STREQ(string2, string1);
}

/**********************************************/


/**********************************************/
/**********************************************/
/**********************************************/

TEST(string2upper,normal_string) {
    char string1[100]="";

    strcpy(string1,"a");
	EXPECT_EQ(str2upper(string1),1);

    strcpy(string1,"aAbBcC");
	EXPECT_EQ(str2upper(string1),3);

    strcpy(string1,"AAAbCCC");
	EXPECT_EQ(str2upper(string1),1);

    strcpy(string1,"0a1b2c3d4e5f6g7h8i9j");
    EXPECT_EQ(str2upper(string1),10);

    strcpy(string1,"01234ab56789");
	EXPECT_EQ(str2upper(string1),2);

}

/**********************************************/

/**********************************************/
/**********************************************/
/**********************************************/
TEST(string2lower,normal_string) {
    char string1[100]="";

    strcpy(string1,"a");
	EXPECT_EQ(str2lower_(string1),0);

    strcpy(string1,"aAbBcC");
	EXPECT_EQ(str2lower_(string1),3);

    strcpy(string1,"AAAbCCC");
	EXPECT_EQ(str2lower_(string1),6);

    strcpy(string1,"0A1B2C3D4E5F6G7H8I9J");
    EXPECT_EQ(str2lower_(string1),10);

    strcpy(string1,"01234AB56789");
	EXPECT_EQ(str2lower_(string1),2);
}



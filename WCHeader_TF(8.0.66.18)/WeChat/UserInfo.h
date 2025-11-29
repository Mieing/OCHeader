@class NSString;

@interface UserInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long userUin;
@property (nonatomic) unsigned int userType;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *userHeadImg;

+ (void)initialize;

@end

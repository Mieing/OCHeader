@class NSString;

@interface RegUserAttrInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *nickName;
@property (retain, nonatomic) NSString *pwdHash;
@property (retain, nonatomic) NSString *headImgMd5;
@property (retain, nonatomic) NSString *phoneNumber;
@property (retain, nonatomic) NSString *timeZone;
@property (retain, nonatomic) NSString *timeZoneName;

+ (void)initialize;

@end

@class NSString, NSData;

@interface SearchBrandContactShare : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *nickName;
@property (retain, nonatomic) NSString *fullpy;
@property (retain, nonatomic) NSString *aliasName;
@property (retain, nonatomic) NSString *country;
@property (retain, nonatomic) NSString *province;
@property (retain, nonatomic) NSString *city;
@property (retain, nonatomic) NSString *signature;
@property (nonatomic) int sex;
@property (nonatomic) unsigned int verifyFlag;
@property (retain, nonatomic) NSData *certInfo;
@property (retain, nonatomic) NSString *brandIconUrl;
@property (retain, nonatomic) NSData *externalInfo;
@property (retain, nonatomic) NSData *brandInfo;
@property (nonatomic) unsigned int brandFlag;
@property (retain, nonatomic) NSString *headImgUrl;

+ (void)initialize;

@end

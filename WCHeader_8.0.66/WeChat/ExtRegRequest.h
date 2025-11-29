@class BaseRequest, NSString;

@interface ExtRegRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *nickName;
@property (retain, nonatomic) NSString *bindMobile;
@property (nonatomic) unsigned int regMode;
@property (nonatomic) unsigned int hasHeadImg;
@property (retain, nonatomic) NSString *regSessionId;
@property (retain, nonatomic) NSString *privacyPolicyCountry;
@property (retain, nonatomic) NSString *extRegUrl;
@property (retain, nonatomic) NSString *headImgFileId;
@property (retain, nonatomic) NSString *headImgAesKey;

+ (void)initialize;

@end

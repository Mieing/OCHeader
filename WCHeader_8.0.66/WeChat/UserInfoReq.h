@class IamBizBaseRequest, NSString;

@interface UserInfoReq : WXPBGeneratedMessage

@property (retain, nonatomic) IamBizBaseRequest *baseRequest;
@property (retain, nonatomic) NSString *biz;
@property (nonatomic) unsigned int identityType;
@property (retain, nonatomic) NSString *identityName;
@property (nonatomic) BOOL interactive;

+ (void)initialize;

@end

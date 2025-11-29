@class IamBizBaseRequest, NSString, InteractiveIdentity;

@interface AcctReq : WXPBGeneratedMessage

@property (retain, nonatomic) IamBizBaseRequest *baseRequest;
@property (retain, nonatomic) NSString *biz;
@property (nonatomic) BOOL getExt;
@property (nonatomic) BOOL acceptBan;
@property (retain, nonatomic) InteractiveIdentity *interactiveIdentity;

+ (void)initialize;

@end

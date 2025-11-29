@class IamBizBaseRequest, NSString;

@interface MeTabStrategyReq : WXPBGeneratedMessage

@property (retain, nonatomic) IamBizBaseRequest *baseRequest;
@property (retain, nonatomic) NSString *biz;
@property (nonatomic) unsigned int open;

+ (void)initialize;

@end

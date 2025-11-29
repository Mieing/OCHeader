@class IamBizBaseRequest, NSString;

@interface MeTabStrategyReq : WXPBGeneratedMessage

@property (retain, nonatomic) IamBizBaseRequest *baseRequest;
@property (retain, nonatomic) NSString *biz;
@property (nonatomic) unsigned int open;
@property (nonatomic) unsigned int canOpen;
@property (nonatomic) unsigned int finderOpen;
@property (nonatomic) unsigned int openWithoutAcct;

+ (void)initialize;

@end

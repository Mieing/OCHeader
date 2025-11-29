@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderLivePrepareIncomeEncashRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned int encashScene;
@property (retain, nonatomic) NSString *requestId;
@property (nonatomic) unsigned long long amount;
@property (nonatomic) unsigned int bizType;
@property (retain, nonatomic) NSString *bizAcctId;
@property (retain, nonatomic) NSString *reportSessionId;

+ (void)initialize;

@end

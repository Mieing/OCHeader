@class BaseRequest, NSString;

@interface GetDistributePreviewReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long amount;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *traceInfo;

+ (void)initialize;

@end

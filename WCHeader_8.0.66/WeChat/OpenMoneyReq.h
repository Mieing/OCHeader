@class BaseRequest, NSString;

@interface OpenMoneyReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *uxinfo;
@property (nonatomic) int source;
@property (nonatomic) unsigned long long materialId;
@property (retain, nonatomic) NSString *traceId;

+ (void)initialize;

@end

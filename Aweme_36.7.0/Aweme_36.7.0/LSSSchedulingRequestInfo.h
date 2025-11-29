@class NSString;
@protocol LSSSchedulingRequestInfoCommonParamsFactory;

@interface LSSSchedulingRequestInfo : NSObject

@property (copy, nonatomic) NSString *host;
@property (weak, nonatomic) id<LSSSchedulingRequestInfoCommonParamsFactory> commonParamsFactory;

+ (id)requestInfoWithHost:(id)a0;

- (id)requestURLWithCurrentInfo;
- (id)requestToGetHosts;
- (id)requestToGetSchedulingResultWithIPMap:(id)a0;
- (id)realTimeTemplateInforequestURL;
- (id)queryItemsWithUrlString:(id)a0 ApiVersion:(long long)a1;
- (id)copy;
- (void).cxx_destruct;
- (id)requestURL;
- (id)initWithHost:(id)a0;

@end

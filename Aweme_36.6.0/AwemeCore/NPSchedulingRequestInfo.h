@class NSString;
@protocol NPSchedulingRequestInfoCommonParamsFactory;

@interface NPSchedulingRequestInfo : NSObject

@property (copy, nonatomic) NSString *host;
@property (nonatomic) BOOL shouldResolveHostsBeforeRequest;
@property (weak, nonatomic) id<NPSchedulingRequestInfoCommonParamsFactory> commonParamsFactory;

+ (id)requestInfoWithHost:(id)a0;

- (id)queryItemsWithUrlString:(id)a0 apiVersion:(long long)a1;
- (id)requestURLWithCurrentInfo;
- (id)requestToGetHosts;
- (id)requestToGetSchedulingResultWithIPMap:(id)a0;
- (id)copy;
- (void).cxx_destruct;
- (id)requestURL;
- (id)initWithHost:(id)a0;

@end

@class NSString, NSDictionary, TTDnsResult, NSObject;
@protocol OS_dispatch_semaphore;

@interface TTDnsQuery : NSObject

@property (copy, nonatomic) NSString *host;
@property (nonatomic) int sdkId;
@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSDictionary *controlHeaders;
@property (retain, nonatomic) TTDnsResult *result;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;

- (id)initWithHost:(id)a0 sdkId:(int)a1 controlHeaders:(id)a2;
- (void)doQuery;
- (void).cxx_destruct;
- (void)resume;
- (void)await;

@end

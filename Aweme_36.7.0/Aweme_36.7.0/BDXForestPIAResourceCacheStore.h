@class NSString;
@protocol PIACacheProcessorProtocol;

@interface BDXForestPIAResourceCacheStore : NSObject <BDWebResourceCacheStoreProtocol>

@property (retain, nonatomic) id<PIACacheProcessorProtocol> piaCacheProcessor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)responseWithRequest:(id)a0;
- (void).cxx_destruct;

@end

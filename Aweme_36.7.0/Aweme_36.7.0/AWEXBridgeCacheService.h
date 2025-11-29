@class NSString;

@interface AWEXBridgeCacheService : NSObject <BDXBridgeCacheServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)saveToCacheWithParam:(id)a0 method:(id)a1;

@end

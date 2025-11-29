@class NSString;

@interface AWEDataLayerMantlePostMethodNetworkProvider : AWEDataLayerPostMethodNetworkProvider <AWEDataLayerMantleNetworkProviderProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)modelFromNetworkResponseObject:(id)a0;
- (Class)modelClass;

@end

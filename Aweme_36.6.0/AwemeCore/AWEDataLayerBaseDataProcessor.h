@class NSString;

@interface AWEDataLayerBaseDataProcessor : NSObject <AWEDataLayerBaseDataProcessorOverride>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)processoredDataFromResponseObject:(id)a0;

@end

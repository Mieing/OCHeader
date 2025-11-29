@class NSString;

@interface BDPFakeDRMResourceLoaderDelegate : NSObject <AVAssetResourceLoaderDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)resourceLoader:(id)a0 shouldWaitForLoadingOfRequestedResource:(id)a1;

@end

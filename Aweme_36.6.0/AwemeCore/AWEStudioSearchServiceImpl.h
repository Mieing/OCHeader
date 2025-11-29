@class NSString;

@interface AWEStudioSearchServiceImpl : NSObject <ACCSearchServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)searchHybridAudioPause;
- (void)appendStorageDataOfDynamicPatchModel:(id)a0 withInfoDic:(id)a1;

@end

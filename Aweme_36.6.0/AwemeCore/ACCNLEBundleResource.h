@class ACCThreadSafeMutableDictionary, NSString, NLEInterface_OC;

@interface ACCNLEBundleResource : NSObject <NLEBundleDataSource>

@property (retain, nonatomic) ACCThreadSafeMutableDictionary *videoResourceUUIDs;
@property (retain, nonatomic) ACCThreadSafeMutableDictionary *audioResourceUUIDs;
@property (weak, nonatomic) NLEInterface_OC *nle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)resourcePathForNode:(id)a0;
- (id)assetForResourceNode:(id)a0 orUUID:(id)a1;
- (void)updateVideoWithAsset:(id)a0 forUUID:(id)a1;
- (void)updateAudioWithAsset:(id)a0 forUUID:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end

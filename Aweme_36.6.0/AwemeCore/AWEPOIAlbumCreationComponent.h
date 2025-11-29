@class NSString;
@protocol ACCRecordSwitchModeService, ACCRecorderViewContainer, AUCBottomModeAlbumService;

@interface AWEPOIAlbumCreationComponent : ACCFeatureComponent <AUCBottomModeAlbumServiceSubscriber, ACCSelectAlbumAssetsDelegate, ACCRecordSwitchModeServiceSubscriber>

@property (weak, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (weak, nonatomic) id<AUCBottomModeAlbumService> bottomModeAlbumService;
@property (weak, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (nonatomic) BOOL shouldSelectAsset;
@property (nonatomic) BOOL bComponentDidAppear;
@property (nonatomic) long long initialSelectedAssetsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)switchModeServiceDidChangeMode:(id)a0 oldMode:(id)a1;
- (void)bindServices:(id)a0;
- (void)albumDidCompleteWithAssets:(id)a0;
- (void)updateAlbumInputDataIfNeeded:(id)a0;
- (void).cxx_destruct;

@end

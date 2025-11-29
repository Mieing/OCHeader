@class NSArray, ACCFollowShootAutoFillTipView, AWEVideoPublishViewModel, AWEAlbumPixelTemplateViewModel;

@interface AWEAlbumTemplateFollowShootTipManager : NSObject <ACCFollowShootAutoFillTipViewDelegate>

@property (weak, nonatomic) AWEAlbumPixelTemplateViewModel *viewModel;
@property (retain, nonatomic) ACCFollowShootAutoFillTipView *tipView;
@property (retain, nonatomic) NSArray *cachedMaterialModels;
@property (retain, nonatomic) NSArray *validMaterialModels;
@property (weak, nonatomic) AWEVideoPublishViewModel *publishModel;

- (void)trackWithEvent:(id)a0;
- (void)confirmLabelTapped;
- (id)initWithViewModel:(id)a0 publishModel:(id)a1;
- (void)showFollowShootTipIfNeededOnView:(id)a0;
- (void)refreshCachedMaterialIDsWithAssetModels:(id)a0;
- (void)dismissFollowShootTip;
- (BOOL)shouldShowFollowShootTip;
- (void)updateAssetCoverImage:(id)a0;
- (void)refreshCachedMaterialIDs:(id)a0;
- (void).cxx_destruct;

@end

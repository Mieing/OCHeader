@class UIView, AWEAssetsCropAndClipViewModel, NSURL, AVURLAsset, NSString, AWEAssetsCropAndClipTopNavigationView, AWEPhotoAssetsCropEditView, AWEVideoAssetsCropEditView, AWEAssetsFragmentInfo, AWEPhotoAssetsBottomPanel, AWEVideoAssetsBottomPanel;

@interface AWEAssetsCropAndClipManager : NSObject <AWEVideoAssetsBottomPanelDelegate, AWEVideoRangeSliderDelegate>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) NSURL *imageFileURL;
@property (retain, nonatomic) AVURLAsset *videoAsset;
@property (retain, nonatomic) AWEAssetsCropAndClipTopNavigationView *topNavigationView;
@property (retain, nonatomic) AWEPhotoAssetsCropEditView *photoCropView;
@property (retain, nonatomic) AWEVideoAssetsCropEditView *videoCropView;
@property (retain, nonatomic) AWEPhotoAssetsBottomPanel *photoBottomView;
@property (retain, nonatomic) AWEVideoAssetsBottomPanel *videoBottomView;
@property (nonatomic) BOOL didModifiedRange;
@property (retain, nonatomic) AWEAssetsCropAndClipViewModel *viewModel;
@property (copy, nonatomic) id /* block */ didChangeAssetsFragmentInfo;
@property (copy, nonatomic) id /* block */ blockingAssetsFragmentInfoChangeCheck;
@property (copy, nonatomic) id /* block */ didCancelAssetsFragmentEdit;
@property (copy, nonatomic) id /* block */ didDismissBlk;
@property (retain, nonatomic) AWEAssetsFragmentInfo *fragment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showOnView:(id)a0;
- (void)updatePlayerStatus:(BOOL)a0;
- (id)initWithVideoAsset:(id)a0 fragmentInfo:(id)a1 viewModel:(id)a2;
- (void)setupForImageAsset;
- (void)setupForVideoAsset;
- (void)setupForLivePhotoAsset;
- (double)photoBottomPanelHeight;
- (double)videoBottomPanelHeight;
- (void)didClickPhotoCloseButton;
- (void)didClickPhotoOKButton;
- (void)didClickVideoCloseButton;
- (void)didClickVideoOKButton;
- (BOOL)hasCropsInfoChanged:(id)a0;
- (void)updateFragmentCropInfos:(id)a0;
- (BOOL)videoRangeIgnoreGesture;
- (void)videoRangeDidBeginByType:(unsigned long long)a0;
- (void)videoRangeDidEndByType:(unsigned long long)a0;
- (void)videoRangeDidChangByPosition:(double)a0 movedType:(unsigned long long)a1;
- (id)initWithImageFileURL:(id)a0 fragmentInfo:(id)a1 viewModel:(id)a2;
- (id)initWithLivePhotoAsset:(id)a0 fragmentInfo:(id)a1 viewModel:(id)a2;
- (void)dismiss;
- (void).cxx_destruct;

@end

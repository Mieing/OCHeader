@class MMImage, UIImageView, WCAssetStateView, UIView, WCMomentsPageContext, NSString;

@interface WCPostMMImageView : UIImageView <IMMAssetICloudExt, MMImageProcessTaskExt>

@property (retain, nonatomic) UIView *statusContainerView;
@property (retain, nonatomic) UIImageView *livePhotoIconView;
@property (retain, nonatomic) WCAssetStateView *stateView;
@property (retain, nonatomic) MMImage *mmImage;
@property (retain, nonatomic) WCMomentsPageContext *pageContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateImageView;
- (void)loadStatusContainerView;
- (void)loadLivePhotoIconViewIfNeeded;
- (void)updateLivePhotoIcon;
- (void)loadStateView;
- (void)updateStateView;
- (void)onAssetImageDonwloadProgress:(double)a0 assetUrl:(id)a1;
- (void)onAssetImageDonwloadStart:(id)a0;
- (void)onAssetImageDonwloadFail:(id)a0;
- (void)updateCloudTipsViews:(id)a0;
- (void)imageProcessTask:(id)a0 didFinishProcessingMMImage:(id)a1;
- (void)imageProcessTask:(id)a0 didFailToProcessMMImage:(id)a1;
- (void).cxx_destruct;

@end

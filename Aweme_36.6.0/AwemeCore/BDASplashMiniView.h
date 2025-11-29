@class BDASplashBaseVideoView, TTAdSplashModel, NSString, UIView, BDImageView;
@protocol BDASplashComplianceViewHolder, BDASplashMiniDelegate;

@interface BDASplashMiniView : UIView <BDASplashVideoViewDelegate, BDASplashComplianceViewHolderDelegate>

@property (weak, nonatomic) id<BDASplashMiniDelegate> delegate;
@property (retain, nonatomic) id<BDASplashComplianceViewHolder> viewHolder;
@property (retain, nonatomic) TTAdSplashModel *model;
@property (retain, nonatomic) BDImageView *imageView;
@property (retain, nonatomic) BDASplashBaseVideoView *videoView;
@property (retain, nonatomic) UIView *complianceView;
@property (nonatomic) double showTime;
@property (nonatomic) unsigned long long splashStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)splashValidClickWithPoint:(struct CGPoint { double x0; double x1; })a0 extra:(id)a1 adExtra:(id)a2;
- (void)splashInvalidClickWithPoint:(struct CGPoint { double x0; double x1; })a0 extra:(id)a1 adExtra:(id)a2;
- (void)splashJumpWithParams:(id)a0 animationType:(long long)a1;
- (id)splashImageDataForKey:(id)a0;
- (void)p_trackShow;
- (void)p_show;
- (void)splashVideoView:(id)a0 playStatus:(unsigned long long)a1 extraInfo:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 splashModel:(id)a1 delegate:(id)a2;
- (void)trackSkip;
- (void)releaseView;
- (void)p_loadMaterial;
- (void)p_loadCompliance;
- (void)p_trackBreak;
- (void)p_showFailWithErrorType:(long long)a0;
- (void)p_loadMaterialVideo;
- (void)p_splashTaskWithStatus:(long long)a0 extraInfo:(id)a1;
- (void)p_startTimeoutTask;
- (void)p_trackFinish;
- (void)p_loadMaterialImage;
- (void).cxx_destruct;
- (void)p_finish;

@end

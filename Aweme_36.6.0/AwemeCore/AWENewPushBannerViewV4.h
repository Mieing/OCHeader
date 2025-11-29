@class NSString, LOTAnimationView, UIImageView, UILabel, UIView, AWEIMPushGuideBannerV4Model;
@protocol AWEPushBannerV4Delegate;

@interface AWENewPushBannerViewV4 : UIView <AWEIMPushBannerV4Protocol>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) LOTAnimationView *animatableIconView;
@property (retain, nonatomic) UIImageView *rightImageView;
@property (retain, nonatomic) AWEIMPushGuideBannerV4Model *model;
@property (weak, nonatomic) id<AWEPushBannerV4Delegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)adjustedHeightForBubbleDisplay;
+ (double)bannerViewHeight;
+ (BOOL)isIMListBannerShowing;
+ (id)sharedBannerView;

- (void)trackShow;
- (void)startIconAnimation;
- (id)basicTrackParams;
- (void)onPushGuideBannerClicked;
- (void)trackOutAppNotifyGuideWithEventType:(id)a0 closeMethod:(id)a1;
- (void)trackUGPushClick;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end

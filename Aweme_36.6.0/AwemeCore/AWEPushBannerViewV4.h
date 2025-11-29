@class AWEIMPushGuideBannerV4Model, NSString, UIImageView, UILabel, UIView, UIButton;
@protocol AWEPushBannerV4Delegate;

@interface AWEPushBannerViewV4 : UIView <AWEIMPushBannerV4Protocol>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) AWEIMPushGuideBannerV4Model *model;
@property (nonatomic) BOOL isOnlineIconImageRequestOnAir;
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
- (void)__setupUI;
- (id)__trackParams;
- (struct CGSize { double x0; double x1; })im_screenSize;
- (double)__screenAvailableWidth;
- (double)__screenAvailableHeight;
- (void)__trackOutAppNotifyGuideWithEventType:(id)a0 closeMethod:(id)a1;
- (void)__trackPushClick;
- (void)__cancelAction;
- (void)__confirmAction;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)updateWithModel:(id)a0;

@end

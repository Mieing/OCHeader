@class NSString, UIImageView, UILabel, UIView;
@protocol _TtP9AWELottie13AWELottieView_;

@interface ACCScanScanMaskView : ACCScanBaseMaskView <ACCScanScanMaskViewStudioProxy>

@property (retain, nonatomic) UIView<_TtP9AWELottie13AWELottieView_> *lottieBubbleView;
@property (retain, nonatomic) UILabel *bottomTipView;
@property (retain, nonatomic) UILabel *tabAlertLabel;
@property (retain, nonatomic) UIImageView *tabAlertImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)needShowBottomTipView;
- (id)tabAlertName;
- (id)tabAlertImage;
- (void).cxx_destruct;
- (void)setupUI;

@end

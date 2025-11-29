@class UILabel, AWEAntiAddictMaskContext, UIButton, NSString, AWEAntiAddictMaskConfig, UIView, AWEGradientView;
@protocol AWEFeedAntiAddictMaskModelProtocol;

@interface AWEAntiAddictMaskFullScreenInteractionView : UIView <UIGestureRecognizerDelegate, AWEAntiAddictMaskInteractionViewProtocol>

@property (retain, nonatomic) id<AWEFeedAntiAddictMaskModelProtocol> model;
@property (retain, nonatomic) AWEAntiAddictMaskContext *context;
@property (retain, nonatomic) AWEAntiAddictMaskConfig *config;
@property (retain, nonatomic) UIView *fullPlayMaskView;
@property (retain, nonatomic) AWEGradientView *topGradientView;
@property (retain, nonatomic) AWEGradientView *bottomGradientView;
@property (retain, nonatomic) UIView *titleContainerView;
@property (retain, nonatomic) AWEGradientView *titleGradientView;
@property (retain, nonatomic) UILabel *mainTitleLabel;
@property (retain, nonatomic) UIButton *mainTitleEditButton;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIButton *subTitleEditButton;
@property (retain, nonatomic) UIView *secondContainerView;
@property (retain, nonatomic) UIButton *settingButton;
@property (retain, nonatomic) UIView *sleepButtonContainer;
@property (retain, nonatomic) UIButton *sleepConfirmButton;
@property (retain, nonatomic) UIButton *sleepCancelButton;
@property (retain, nonatomic) UIView *restButtonContainer;
@property (retain, nonatomic) UIButton *restCancelButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *mainTitle;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *enterText;
@property (copy, nonatomic) NSString *laterRemindText;
@property (copy, nonatomic) NSString *exitText;

- (void)addGestureRecognizer;
- (void)didClickCancelButton;
- (void)catchGesture:(id)a0;
- (void)setupCommonViews;
- (void)setupUILayout;
- (void)updateViewShadow:(id)a0 radius:(double)a1 shadowAlpha:(double)a2;
- (void)didClickTitleEdit;
- (void)didClickSubTitleEdit;
- (void)setupGeneralButton;
- (void)didClickSettingButton;
- (void)didClickSleepConfirmButton;
- (BOOL)isCustomRemind;
- (BOOL)isSleepRemind;
- (void)updateViewShadow:(id)a0 radius:(double)a1 shadowOpacity:(double)a2 shadowOffsetX:(double)a3 shadowOffsetY:(double)a4 shadowAlpha:(double)a5;
- (void)showInteractionViewAnimationWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)updateWithConfig:(id)a0;
- (id)initWithContext:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)reset;
- (void)setup;

@end

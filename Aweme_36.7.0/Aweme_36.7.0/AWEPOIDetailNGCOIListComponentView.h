@class AWEPOIRepeatBackgroundView, NSString, AWEPOIDetailNGCOIDynamicGroupView, UIImageView, AWEGradientView, AWEPOIDetailNGCOIListComponentViewModel, YYLabel, UIButton, AWEPOIDetailNGCOIListFeedbackView, UILabel;

@interface AWEPOIDetailNGCOIListComponentView : DitoComponentView

@property (weak, nonatomic) AWEPOIDetailNGCOIListComponentViewModel *viewModel;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) AWEGradientView *coverImageGradientView;
@property (retain, nonatomic) YYLabel *adTagLabel;
@property (retain, nonatomic) AWEPOIDetailNGCOIDynamicGroupView *titleGroupView;
@property (retain, nonatomic) AWEPOIDetailNGCOIDynamicGroupView *rateGroupView;
@property (retain, nonatomic) AWEPOIDetailNGCOIDynamicGroupView *subtitleGroupView;
@property (retain, nonatomic) AWEPOIDetailNGCOIDynamicGroupView *thirdGroupView;
@property (retain, nonatomic) AWEPOIDetailNGCOIDynamicGroupView *infoGroupView;
@property (retain, nonatomic) UILabel *distanceLabel;
@property (retain, nonatomic) AWEPOIRepeatBackgroundView *textureBackgroundView;
@property (retain, nonatomic) UIButton *feedbackButton;
@property (retain, nonatomic) AWEPOIDetailNGCOIListFeedbackView *feedbackView;
@property (readonly, nonatomic) BOOL isFeedbackAvailable;
@property (retain, nonatomic) NSString *feedbackEnterMethod;

- (void)updateViewModel:(id)a0;
- (BOOL)tapGesture:(id)a0 inView:(id)a1;
- (void)didTapContainerView:(id)a0;
- (void)didLongPressContainerView:(id)a0;
- (void)clickFeedbackEntry;
- (void)hideFeedback:(BOOL)a0;
- (void)updateA11yTextWithViewModel:(id)a0;
- (id)tapAreaWithTapGesture:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end

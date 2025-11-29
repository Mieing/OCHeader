@class IESLLPOIDetailNGCOIListFeedbackView, NSString, IESLLGradientView, IESLLPOIRepeatBackgroundView, UIImageView, UIButton, YYLabel, IESLLPOIDetailNGCOIDynamicGroupView, UILabel, IESLLPOIDetailNGCOIListComponentViewModel;

@interface IESLLPOIDetailNGCOIListComponentView : LLDitoComponentView

@property (weak, nonatomic) IESLLPOIDetailNGCOIListComponentViewModel *viewModel;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) IESLLGradientView *coverImageGradientView;
@property (retain, nonatomic) YYLabel *adTagLabel;
@property (retain, nonatomic) IESLLPOIDetailNGCOIDynamicGroupView *titleGroupView;
@property (retain, nonatomic) IESLLPOIDetailNGCOIDynamicGroupView *rateGroupView;
@property (retain, nonatomic) IESLLPOIDetailNGCOIDynamicGroupView *subtitleGroupView;
@property (retain, nonatomic) IESLLPOIDetailNGCOIDynamicGroupView *thirdGroupView;
@property (retain, nonatomic) IESLLPOIDetailNGCOIDynamicGroupView *infoGroupView;
@property (retain, nonatomic) UILabel *distanceLabel;
@property (retain, nonatomic) IESLLPOIRepeatBackgroundView *textureBackgroundView;
@property (retain, nonatomic) UIButton *feedbackButton;
@property (retain, nonatomic) IESLLPOIDetailNGCOIListFeedbackView *feedbackView;
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

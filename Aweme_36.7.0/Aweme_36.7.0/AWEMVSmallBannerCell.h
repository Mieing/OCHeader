@class UIVisualEffectView, UILabel, UIView, UIButton;

@interface AWEMVSmallBannerCell : AWEDCFeedBaseCell

@property (retain, nonatomic) UIVisualEffectView *dislikeMaskView;
@property (retain, nonatomic) UIView *feedbackContainerView;
@property (retain, nonatomic) UILabel *feedbackTitleLabel;
@property (retain, nonatomic) UILabel *feedbackLDescLabel;
@property (retain, nonatomic) UIButton *revokeButton;

+ (id)elementArray;

- (void)configWithModel:(id)a0 context:(id)a1;
- (void)showFeedbackMask;
- (void)dismissFeedbackMask;
- (void)onClickCloseBtn;
- (void)addFeedbackViews;
- (void)revokeButtonPressed:(id)a0;
- (id)mvPageContext;
- (void).cxx_destruct;

@end

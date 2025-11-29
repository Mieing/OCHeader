@class BDMannorStyleTemplateComponentDataModel, NSDictionary, UIImageView, BDMannorComponentManagerContext, UIView, BDMannorStyleTemplateComponentModel, UIButton;

@interface BDMannorAdCommentGuideView : UIView

@property (retain, nonatomic) UIButton *openButton;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIButton *nameButton;
@property (retain, nonatomic) UIButton *descButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIView *seperateView;
@property (retain, nonatomic) UIView *baseView;
@property (retain, nonatomic) UIView *effectView;
@property (weak, nonatomic) BDMannorComponentManagerContext *context;
@property (retain, nonatomic) BDMannorStyleTemplateComponentModel *componentModel;
@property (retain, nonatomic) BDMannorStyleTemplateComponentDataModel *data;
@property (copy, nonatomic) NSDictionary *layoutContext;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (copy, nonatomic) id /* block */ autoTrackerClickBlock;

- (void)closeBtnClicked:(id)a0;
- (void)onViewClicked;
- (void)openLearnMoreBtnClicked:(id)a0;
- (void)onAvatarClicked:(id)a0;
- (void)onNameClicked:(id)a0;
- (void)onDescClicked:(id)a0;
- (double)preferredWidthForLabel:(id)a0;
- (void)setupComponentViewUIWithModel;
- (void)layoutSublayersOfLayer:(id)a0;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)resetLayout;
- (void)setupUI;
- (BOOL)isWhiteColor;

@end

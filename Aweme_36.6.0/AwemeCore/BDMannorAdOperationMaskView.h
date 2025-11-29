@class UIButton, BDMannorAdOperationComponentView, BDMannorComponentManagerContext, BDMannorStyleTemplateComponentDataModel, BDMannorStyleTemplateComponentModel, UIView;

@interface BDMannorAdOperationMaskView : UIView

@property (weak, nonatomic) BDMannorComponentManagerContext *context;
@property (retain, nonatomic) BDMannorStyleTemplateComponentModel *componentModel;
@property (retain, nonatomic) BDMannorStyleTemplateComponentDataModel *data;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIButton *replayBtn;
@property (retain, nonatomic) UIButton *learnMoreBtn;
@property (retain, nonatomic) BDMannorAdOperationComponentView *componentView;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) id /* block */ onSubViewClick;

- (void)replayBtnClicked:(id)a0;
- (void)learnMoreBtnClicked:(id)a0;
- (void)setupComponentViewUIWithModel;
- (void)configDifferentUI;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)init;
- (void)setupUI;

@end

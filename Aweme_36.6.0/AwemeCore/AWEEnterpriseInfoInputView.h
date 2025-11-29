@class UIStackView, NSArray, AWEEnterpriseInfoInputViewModel, UILabel, UIView, UIButton;

@interface AWEEnterpriseInfoInputView : AWEEnterpriseMessageBaseView

@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (retain, nonatomic) UILabel *mainTitle;
@property (retain, nonatomic) UILabel *subTitle;
@property (retain, nonatomic) UIButton *registerButton;
@property (retain, nonatomic) UIStackView *infoStack;
@property (retain, nonatomic) NSArray *infoLabels;
@property (retain, nonatomic) UIView *separatorLine;
@property (retain, nonatomic) UILabel *finishLabel;
@property (weak, nonatomic) AWEEnterpriseInfoInputViewModel *viewModel;

- (void)bindViewModel:(id)a0;
- (void)constraintSubviews;
- (void)creatInfoLabelwithText:(id)a0;
- (void)p_updateConstraints;
- (void)p_setViewHidden:(BOOL)a0;
- (void)refreshCardWithCollectedInfos:(id)a0;
- (void)didClickRegisterButton;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })currentContentSize;
- (void)setupUI;

@end

@class UILabel, UIButton;

@interface AWERegisterPageInfoCollectTopView : UIView

@property (retain, nonatomic) UILabel *pageLabel;
@property (retain, nonatomic) UIButton *jumpButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UILabel *navTitleLabel;
@property (copy, nonatomic) id /* block */ jumpBlock;

- (void)configTopViewUIToFitSmallScreenWithTitle:(id)a0;
- (void)configWith:(long long)a0 title:(id)a1 subtitle:(id)a2 jumpButtonClickBlock:(id /* block */)a3;
- (void)resetToSmallScreenNormalUI;
- (void)jumpButtonClick;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end

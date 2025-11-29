@class UILabel, UIButton;

@interface AWEFeedDetailTableViewLastCellMaskView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *backLabel;
@property (retain, nonatomic) UIButton *backButton;
@property (copy, nonatomic) id /* block */ backAction;

- (void)backButtonClicked:(id)a0;
- (void)configWithTitle:(id)a0 backHintText:(id)a1 backAction:(id /* block */)a2;
- (id)initWithDismissAction:(id /* block */)a0;
- (void).cxx_destruct;
- (void)setupUI;

@end

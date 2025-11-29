@class UIImageView, UILabel, UIButton;

@interface AWEBatManActionsTasksCell : UITableViewCell

@property (weak, nonatomic) UIImageView *iconImg;
@property (weak, nonatomic) UILabel *titleLbl;
@property (weak, nonatomic) UILabel *subTitleLbl;
@property (weak, nonatomic) UIImageView *checkImg;
@property (weak, nonatomic) UILabel *timeLbl;
@property (weak, nonatomic) UIButton *taskBtn;
@property (copy, nonatomic) id /* block */ onTaskButtonClicked;

- (void)hideTip;
- (void)onTaskBtnClicked:(id)a0;
- (void)setTaskButtonDisabledWithTitle:(id)a0;
- (void)setTaskButtonUnusableWithTitle:(id)a0;
- (void)setTaskButtonEnabledWithTitle:(id)a0;
- (void)showTipWithTrialTime:(long long)a0;
- (void).cxx_destruct;
- (void)setPreferredMaxLayoutWidth:(double)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setViewModel:(id)a0;
- (void)createUI;

@end

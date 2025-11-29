@class UIImageView, UILabel, UIView, UIButton;

@interface AWEPublishUserDeclarationReminderView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *triangleImageView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLab;
@property (retain, nonatomic) UIButton *addBtn;
@property (copy, nonatomic) id /* block */ addBtnDidClickedBlock;

- (void)addBtnDidClicked:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

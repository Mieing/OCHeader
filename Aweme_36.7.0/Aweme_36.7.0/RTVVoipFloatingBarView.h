@class UIImageView, UILabel, UIButton;

@interface RTVVoipFloatingBarView : UIView

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (copy, nonatomic) id /* block */ closeButtonTappedBlock;

- (void)closeButtonDidTapped;
- (void).cxx_destruct;
- (id)initWithContent:(id)a0;
- (void)setupLayout;

@end

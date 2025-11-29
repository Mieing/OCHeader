@class UIImageView, UIButton;

@interface IESECLiveReplayCartView : UIView

@property (retain, nonatomic) UIImageView *cartImageView;
@property (retain, nonatomic) UIButton *actionButton;
@property (copy, nonatomic) id /* block */ clickedBlock;

- (void)actionButtonClicked:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end

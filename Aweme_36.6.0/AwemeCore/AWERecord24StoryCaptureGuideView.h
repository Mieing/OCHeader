@class UIImageView, UILabel, DUXButton;

@interface AWERecord24StoryCaptureGuideView : UIView

@property (retain, nonatomic) UIImageView *storyLogoImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) DUXButton *actionButton;
@property (copy, nonatomic) id /* block */ clickedBlock;

- (void)setupWithConfig:(id)a0;
- (void)actionButtonClicked:(id)a0;
- (void)configClickedBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end

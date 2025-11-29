@class UIImageView, UILabel, UIButton;
@protocol AWESearchAIGCInputVideoRSHeaderViewDelegate;

@interface AWESearchAIGCInputVideoRSHeaderView : UIView

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (weak, nonatomic) id<AWESearchAIGCInputVideoRSHeaderViewDelegate> delegate;

+ (double)viewHeight;

- (void)closeAction:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end

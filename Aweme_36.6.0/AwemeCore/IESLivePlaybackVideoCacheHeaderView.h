@class UILabel, UIButton, NSString;

@interface IESLivePlaybackVideoCacheHeaderView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *resolutionButton;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ resolutionButtonClicked;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)p_commonInit;

@end

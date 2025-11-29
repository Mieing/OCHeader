@class UILabel, IESLiveAnimatedImageView, NSString;

@interface IESLiveAnchorMultiLinkerLoadingView : UIView

@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) IESLiveAnimatedImageView *animationView;
@property (nonatomic) BOOL slim;
@property (copy, nonatomic) NSString *content;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end

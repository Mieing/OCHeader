@class NSString, UIImageView, UILabel, UIButton;

@interface IESLivePlaybackVerticalErrorView : HTSEventForwardingView <IESLivePlaybackLoadingRetryView>

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIButton *restartButton;
@property (copy, nonatomic) id /* block */ restartBlock;
@property (copy, nonatomic) NSString *text;

- (void)restartButtonDidClick;
- (void)setupSubViews;
- (void)setupConstraints;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

@class UILabel, UIImageView, NSString;
@protocol IESLiveWebPPlayer;

@interface IESLiveMediaMultiLinkerLoadingView : UIView

@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *animationView;
@property (nonatomic) BOOL slim;
@property (copy, nonatomic) NSString *content;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end

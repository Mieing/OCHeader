@class UILabel, UIImageView, UIView;
@protocol AWEMusicQueueHeaderViewDelegate;

@interface AWEMusicQueueHeaderView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) UIView *queueModeButton;
@property (retain, nonatomic) UIImageView *modeImage;
@property (retain, nonatomic) UILabel *modeTitle;
@property (weak, nonatomic) id<AWEMusicQueueHeaderViewDelegate> delegate;
@property (nonatomic) unsigned long long loopMode;

- (void)didTapQueueModeButton;
- (void).cxx_destruct;
- (void)setCount:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupView;

@end

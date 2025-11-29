@class UIView;

@interface AWEWatchLaterCellProgressView : UIView

@property (retain, nonatomic) UIView *progressView;
@property (nonatomic) double preferedWidth;

- (void)updatePlayProgress:(double)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end

@class UILabel, UIProgressView;

@interface AWEIMLeagueFileProgressView : UIView

@property (retain, nonatomic) UIProgressView *progress;
@property (retain, nonatomic) UILabel *progressLabel;

- (void)addViewConstraints;
- (void).cxx_destruct;
- (id)init;
- (void)updateWithProgress:(double)a0;
- (void)setupUI;

@end

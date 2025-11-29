@class UIImageView, UILabel;

@interface AWEWatchLaterWatchedVideoEntranceView : UIView

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIImageView *arrowView;

- (double)iconViewWidth;
- (double)arrowViewWidth;
- (void)updateTextLabelWithText:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end

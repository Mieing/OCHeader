@class UIImageView, UILabel;
@protocol AWEFeedSpeedCapsuleViewPlaybackRateDelegate;

@interface AWEFeedSpeedCapsuleView : UIView

@property (retain, nonatomic) UIImageView *closeButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (weak, nonatomic) id<AWEFeedSpeedCapsuleViewPlaybackRateDelegate> delegate;

- (void)handleCloseButtonClick;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end

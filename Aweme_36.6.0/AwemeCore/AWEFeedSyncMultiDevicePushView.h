@class UIImageView, UILabel, UIView, UIButton;
@protocol AWEFeedSyncMultiDevicePushViewDelegate;

@interface AWEFeedSyncMultiDevicePushView : UIView

@property (retain, nonatomic) UIView *contentBaseView;
@property (retain, nonatomic) UIButton *agreeButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *coverView;
@property (weak, nonatomic) id<AWEFeedSyncMultiDevicePushViewDelegate> delegate;

- (void)updateViewWithURLs:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;

@end

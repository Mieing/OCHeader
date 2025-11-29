@class UIImageView, UILabel;

@interface AWEOfflineVideoDownloadingGroupMarkView : UIView

@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) long long badgeCount;
@property (nonatomic) BOOL isPauseStyle;

- (void)buttonClickAction;
- (void).cxx_destruct;
- (id)init;
- (void)setupView;

@end

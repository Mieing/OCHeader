@class NSString, UIImageView, UILabel, UIView, UIButton;
@protocol WCFinderFeedFriendsLikeGuideViewControllerDelegate;

@interface WCFinderFeedFriendsLikeGuideViewController : MMWindowViewController

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIButton *confirmButton;
@property (weak, nonatomic) id<WCFinderFeedFriendsLikeGuideViewControllerDelegate> delegate;
@property (copy, nonatomic) NSString *tipsTitle;
@property (copy, nonatomic) NSString *tipsSubtitle;
@property (copy, nonatomic) NSString *cancelButtonTitle;
@property (copy, nonatomic) NSString *confirmButtonTitle;

- (void)viewDidLoad;
- (void)showTips;
- (void)setupSubviews;
- (void)onCancel;
- (void)onConfirm;
- (void)hideMyself;
- (void).cxx_destruct;

@end

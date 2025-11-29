@class UIButton, UILabel, MMHeadImageView;
@protocol WCFinderPublishHeadTableViewCellProtocol;

@interface WCFinderPublishHeadTableViewCell : UITableViewCell

@property (retain, nonatomic) UIButton *notifyButton;
@property (retain, nonatomic) UILabel *unReadLabel;
@property (weak, nonatomic) MMHeadImageView *headImageView;
@property (weak, nonatomic) id<WCFinderPublishHeadTableViewCellProtocol> delegate;
@property (nonatomic) BOOL isInDarkMode;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateContentViewBackgroundColor:(id)a0;
- (void)layoutSubviews;
- (void)setUpNotifyButton;
- (void)updateNotifyButton;
- (void)adjustUIFrame;
- (void)onClickNotificationMsgBtn;
- (void).cxx_destruct;

@end

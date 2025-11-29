@class WCFinderContact, NSString, WCFinderHeadImageView, UILabel, UIButton;
@protocol WCFinderTimelinePrivateMsgTableViewCellDelegate;

@interface WCFinderTimelinePrivateMsgTableViewCell : UITableViewCell <WCFinderContactExt>

@property (retain, nonatomic) UIButton *notifyButton;
@property (retain, nonatomic) UILabel *unReadLabel;
@property (weak, nonatomic) WCFinderHeadImageView *headImageView;
@property (copy, nonatomic) NSString *currentMsgUsername;
@property (retain, nonatomic) WCFinderContact *finderContact;
@property (weak, nonatomic) id<WCFinderTimelinePrivateMsgTableViewCellDelegate> delegate;
@property (nonatomic) BOOL isInDarkMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)setUpNotifyButton;
- (void)updateNotifyButton;
- (void)adjustUIFrame;
- (void)onClickNotificationMsgBtn;
- (void)onFinderContactUpdate:(id)a0;
- (void).cxx_destruct;

@end

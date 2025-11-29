@class UIButton, MMHeadImageView, BTNotifySectionData;
@protocol BTNotifyMsgCellViewDelegate;

@interface BTNotifyMsgCellView : MMTableViewCell

@property (retain, nonatomic) UIButton *messageTipsVew;
@property (retain, nonatomic) MMHeadImageView *headerView;
@property (weak, nonatomic) id<BTNotifyMsgCellViewDelegate> delegate;
@property (retain, nonatomic) BTNotifySectionData *viewModel;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initSubViews;
- (void)updateWithMsg:(id)a0 unreadCount:(unsigned int)a1;
- (void)layoutSubviews;
- (void)onClick;
- (void).cxx_destruct;

@end

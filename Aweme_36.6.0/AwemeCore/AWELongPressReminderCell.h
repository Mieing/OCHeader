@class UILabel, AWELongPressReminderMultiAvatarView, UIView;
@protocol AWELongPressReminderCellDelegate;

@interface AWELongPressReminderCell : AWELongPressPanelSettingCell

@property (retain, nonatomic) UIView *mainView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWELongPressReminderMultiAvatarView *multiAvatarView;
@property (weak, nonatomic) id<AWELongPressReminderCellDelegate> delegate;

- (void)setDefaultUI:(id)a0;
- (void)closeBtnDidClick;
- (void).cxx_destruct;
- (void)setUpUI;

@end

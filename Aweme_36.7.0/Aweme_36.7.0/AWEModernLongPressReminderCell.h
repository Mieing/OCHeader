@class AWELongPressPanelBaseViewModel, UILabel, AWELongPressReminderMultiAvatarView, UIView;
@protocol AWEModernLongPressReminderCellDelegate;

@interface AWEModernLongPressReminderCell : UITableViewCell

@property (retain, nonatomic) UIView *mainView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWELongPressReminderMultiAvatarView *multiAvatarView;
@property (retain, nonatomic) AWELongPressPanelBaseViewModel *longPressPanelVM;
@property (weak, nonatomic) id<AWEModernLongPressReminderCellDelegate> delegate;

- (void)setDefaultUI:(id)a0;
- (void)closeBtnDidClick;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setUpUI;

@end

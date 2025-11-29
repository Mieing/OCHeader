@class ContactsItemView, UIImageView, CContact, UIView, UIButton;

@interface WCMomentsHistoryGroupCell : MMTableViewCell

@property (retain, nonatomic) UIImageView *leftCheckMark;
@property (retain, nonatomic) ContactsItemView *historyGroupItemView;
@property (retain, nonatomic) UIButton *rightDetailBtn;
@property (retain, nonatomic) UIView *seperatorLine;
@property (retain, nonatomic) CContact *historyGroupContact;
@property (copy, nonatomic) id /* block */ detailCallback;

+ (id)cellIdentifier;

- (void)updateWithHistoryGroupContact:(id)a0 checked:(BOOL)a1 clickedDetail:(id /* block */)a2;
- (void)updateCheckMark:(BOOL)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initView;
- (void)initLeftCheckMark;
- (void)initHistoryGroupItemView;
- (void)initRightDetailBtn;
- (void)initSeperatorLine;
- (void)onClickHistoryGroupDetail:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end

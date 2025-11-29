@class UIButton, OldAccountContact, UILabel, UIView, MMHeadImageView;
@protocol ContactsImportTableViewCellDelegate;

@interface ContactsImportTableViewCell : UITableViewCell

@property (retain, nonatomic) MMHeadImageView *headImageView;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) UIButton *addButton;
@property (retain, nonatomic) UILabel *addedLabel;
@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) OldAccountContact *oldAccountContact;
@property (weak, nonatomic) id<ContactsImportTableViewCellDelegate> delegate;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setHighlighted:(BOOL)a0;
- (void)layoutSubviews;
- (void)onTapAddButton;
- (void).cxx_destruct;

@end

@class AFDFriendsRequestEntryViewModel, UIImageView, UILabel, UIView, DUXBadge;

@interface AFDFriendsRequestEntryView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) DUXBadge *badgeView;
@property (retain, nonatomic) AFDFriendsRequestEntryViewModel *model;
@property (nonatomic) long long viewHeight;
@property (copy, nonatomic) id /* block */ dimissBlock;

- (void)updateWithEntryViewModel:(id)a0;
- (void)p_setupViews;
- (void)dismissWithAnimate:(BOOL)a0;
- (double)entryViewHeight;
- (id)fontWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

@class UILabel, UIImageView;

@interface AFDFamiliarSearchFriendHolderHeaderView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *icon;
@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL shouldUpdateMutualTitle;

- (void)p_setupViews;
- (void)updateWithSectionType:(unsigned long long)a0 totalNumberOfFriends:(id)a1 shouldEnlargeAllFriendsSection:(BOOL)a2 isFromPersonalPage:(BOOL)a3;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didTapHeaderView;

@end

@class WCFinderHeadImageView, UIImageView, UILabel, UIView, WCFinderUserRelationshipTagLabel;

@interface WCFinderFansListViewCell : MMMultiMenuTableViewCell

@property (retain, nonatomic) UILabel *nickName;
@property (retain, nonatomic) WCFinderHeadImageView *headImageView;
@property (retain, nonatomic) UIView *separator;
@property (weak, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) WCFinderUserRelationshipTagLabel *userTagLabel;

+ (double)cellHeight;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setUpUI;
- (void)prepareForReuse;
- (void)updateWithContact:(id)a0;
- (void)updateUserTagWithContact:(id)a0;
- (void)showSeparator:(BOOL)a0;
- (void)setupRevertMenu;
- (void)setupDeleteMenu;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end

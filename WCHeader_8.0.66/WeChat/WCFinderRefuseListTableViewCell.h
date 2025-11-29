@class UILabel, UIView, WCFinderHeadImageView;

@interface WCFinderRefuseListTableViewCell : MMMultiMenuTableViewCell

@property (retain, nonatomic) UILabel *nickName;
@property (retain, nonatomic) WCFinderHeadImageView *headImageView;
@property (retain, nonatomic) UIView *separator;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)updateWithContact:(id)a0;
- (void)showSeparator:(BOOL)a0;
- (void)setupRevertMenu;
- (void)setupDeleteMenu;
- (void).cxx_destruct;

@end

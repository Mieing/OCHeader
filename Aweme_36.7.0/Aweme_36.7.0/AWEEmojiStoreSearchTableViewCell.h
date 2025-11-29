@class AWEIMCommonSearchView;
@protocol AWEEmojiStoreSearchTableViewCellDelegate;

@interface AWEEmojiStoreSearchTableViewCell : UITableViewCell

@property (retain, nonatomic) AWEIMCommonSearchView *searchView;
@property (weak, nonatomic) id<AWEEmojiStoreSearchTableViewCellDelegate> delegate;

- (void)didClickSearchBar;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;
- (void)setupLayout;

@end

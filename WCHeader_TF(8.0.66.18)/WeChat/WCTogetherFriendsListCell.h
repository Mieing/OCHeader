@class WCTogetherFriendsListViewItem, UIImageView, UILabel, InteractionLabel, UIView;

@interface WCTogetherFriendsListCell : WCTogetherBaseCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *togetherFriendsListView;
@property (retain, nonatomic) InteractionLabel *friendsNameLabel;
@property (retain, nonatomic) InteractionLabel *friendsCountLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) WCTogetherFriendsListViewItem *viewItem;

+ (id)cellIdentifier;
+ (id)createTitleLabel;
+ (double)heightForViewItem:(id)a0 inTableView:(id)a1;

- (id)observingKeyPathsForViewModel;
- (void)updateValueForKeyPath:(id)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)createHeaderViewWithSize:(double)a0;
- (void)layoutSubviews;
- (void)friendsLabelClicked:(id)a0;
- (void).cxx_destruct;

@end

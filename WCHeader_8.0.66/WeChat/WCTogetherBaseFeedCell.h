@class MMUILabel, TextStateItemView, WCTogetherFeedCellContentView, WCTogetherFeedViewItem, UIView, InteractionLabel, MMHeadImageView;

@interface WCTogetherBaseFeedCell : WCTogetherBaseCell

@property (retain, nonatomic) UIView *infoView;
@property (retain, nonatomic) MMHeadImageView *authorHeaderView;
@property (retain, nonatomic) InteractionLabel *authorNicknameLabel;
@property (retain, nonatomic) MMUILabel *dateLabel;
@property (retain, nonatomic) TextStateItemView *textStateView;
@property (retain, nonatomic) WCTogetherFeedCellContentView *itemContentView;
@property (retain, nonatomic) UIView *footerView;
@property (retain, nonatomic) MMUILabel *friendsLabel;
@property (retain, nonatomic) InteractionLabel *locationLabel;
@property (retain, nonatomic) WCTogetherFeedViewItem *viewItem;

+ (id)cellIdentifier;
+ (id)createFriendsLabel;
+ (double)heightForViewItem:(id)a0 inTableView:(id)a1;
+ (double)heightForItemContentViewWithViewItem:(id)a0 inTableView:(id)a1;
+ (double)heightForFooterViewWithViewItem:(id)a0 inTableView:(id)a1;
+ (double)heightForTogetherTextWithViewItem:(id)a0 withWidth:(double)a1;

- (id)observingKeyPathsForViewModel;
- (void)updateValueForKeyPath:(id)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)createHeaderViewWithSize:(double)a0;
- (void)loadInfoView;
- (void)loadItemContentView;
- (void)loadFooterView;
- (void)layoutSubviews;
- (void)layoutInfoView;
- (void)layoutItemContentView;
- (void)layoutFooterView;
- (void)headerViewDidClicked:(id)a0;
- (void)nicknameLabelClicked:(id)a0;
- (void)textStateViewClicked:(id)a0;
- (void)contentDidTap;
- (void)locationLabelClicked:(id)a0;
- (void).cxx_destruct;

@end

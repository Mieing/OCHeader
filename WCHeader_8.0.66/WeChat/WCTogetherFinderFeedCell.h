@class SightIconView, MMWebImageView;

@interface WCTogetherFinderFeedCell : WCTogetherBaseFeedCell

@property (retain, nonatomic) MMWebImageView *previewImageView;
@property (retain, nonatomic) SightIconView *playIconView;

+ (id)cellIdentifier;
+ (double)heightForItemContentViewWithViewItem:(id)a0 inTableView:(id)a1;

- (id)observingKeyPathsForViewModel;
- (void)updateValueForKeyPath:(id)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)loadItemContentView;
- (void)layoutItemContentView;
- (void)contentDidTap;
- (void).cxx_destruct;

@end

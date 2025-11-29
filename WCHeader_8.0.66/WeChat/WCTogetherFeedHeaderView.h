@class UILabel, WCTogetherFeedViewSection;

@interface WCTogetherFeedHeaderView : WCTogetherReusableView

@property (retain, nonatomic) UILabel *yearTextLabel;
@property (retain, nonatomic) UILabel *dayTextLabel;
@property (retain, nonatomic) WCTogetherFeedViewSection *viewSection;

+ (id)reusableViewIdentifier;
+ (double)heightForViewSection:(id)a0 inTableView:(id)a1;

- (id)observingKeyPathsForViewModel;
- (void)updateValueForKeyPath:(id)a0;
- (id)initWithReuseIdentifier:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end

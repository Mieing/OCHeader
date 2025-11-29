@class WCTogetherFeedViewSection, UIView;

@interface WCTogetherFeedFooterView : WCTogetherReusableView

@property (retain, nonatomic) UIView *bottomLine;
@property (retain, nonatomic) WCTogetherFeedViewSection *viewSection;

+ (id)reusableViewIdentifier;
+ (double)heightForViewSection:(id)a0 inTableView:(id)a1;

- (id)observingKeyPathsForViewModel;
- (void)updateValueForKeyPath:(id)a0;
- (id)initWithReuseIdentifier:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end

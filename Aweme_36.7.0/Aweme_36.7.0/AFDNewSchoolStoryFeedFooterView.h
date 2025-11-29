@class UIView;

@interface AFDNewSchoolStoryFeedFooterView : UITableViewHeaderFooterView

@property (retain, nonatomic) UIView *lineView;
@property (nonatomic) long long style;

+ (id)identifierForStyle:(long long)a0;
+ (double)footerHeightForCardModel:(id)a0 style:(long long)a1;

- (void)updateLineViewWithStyle:(long long)a0;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;
- (void)layoutSubviews;

@end

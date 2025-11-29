@class UILabel;

@interface AWEDCFeedCellDescriptionElement : AWEDCFeedBaseCellElement

@property (retain, nonatomic) UILabel *descriptionLabel;

+ (BOOL)canShowWithAwemeModel:(id)a0 context:(id)a1;
+ (double)heightWithCellWidth:(double)a0 awemeModel:(id)a1 context:(id)a2;
+ (long long)elementStyle;
+ (id)titleWithAwemeModel:(id)a0 context:(id)a1;
+ (double)descriptionLabelFontSizeWithContext:(id)a0;
+ (id)optTitle:(id)a0;
+ (id)descriptionLabelColorWithContext:(id)a0;

- (void)configWithModel:(id)a0 context:(id)a1;
- (void)themeDidChange:(long long)a0;
- (void)calculateLabelHeightIfNeeded:(id)a0 context:(id)a1;
- (void)setupSubViews;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)reset;

@end

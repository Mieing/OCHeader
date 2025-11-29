@class UILabel, AWEDCFeedCellRecommendReasonModel, UIImageView;

@interface AWEDCFeedCellTagElement : AWEDCFeedBaseCellElement

@property (retain, nonatomic) AWEDCFeedCellRecommendReasonModel *recommendReasonModel;
@property (retain, nonatomic) UILabel *recommendTagLabel;
@property (retain, nonatomic) UIImageView *recommendTagIcon;

+ (BOOL)canShowWithAwemeModel:(id)a0 context:(id)a1;
+ (double)heightWithCellWidth:(double)a0 awemeModel:(id)a1 context:(id)a2;
+ (long long)elementStyle;

- (void)configWithModel:(id)a0 context:(id)a1;
- (void)themeDidChange:(long long)a0;
- (id)containerColor;
- (double)iconLeftMargin;
- (double)iconAndTextMargin;
- (double)textRightMargin;
- (id)currentIconUrls;
- (void)loadRecommendReasonView;
- (void)setupSubViews;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)font;
- (void)reset;
- (double)iconWidth;
- (id)textColor;
- (double)fontSize;
- (double)iconHeight;
- (double)containerCornerRadius;
- (double)containerHeight;
- (id)iconPlaceholderColor;

@end

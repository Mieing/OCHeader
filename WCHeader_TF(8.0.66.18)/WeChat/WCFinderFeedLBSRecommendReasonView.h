@class WCFinderFeedLBSRecommendReasonViewConfig, UILabel;

@interface WCFinderFeedLBSRecommendReasonView : UIView

@property (retain, nonatomic) WCFinderFeedLBSRecommendReasonViewConfig *config;
@property (retain, nonatomic) UILabel *label;

+ (double)heightForReasonItems:(id)a0 config:(id)a1 width:(double)a2;
+ (id)createReasonItemsStr:(id)a0 config:(id)a1;
+ (id)createReasonItemStr:(id)a0 config:(id)a1;
+ (id)createReasonItemPaddingStr:(id)a0 config:(id)a1;
+ (id)createClearPaddingAttrString:(double)a0 font:(id)a1;
+ (id)attachmentWithView:(id)a0 font:(id)a1;
+ (id)attachmentWithImage:(id)a0 size:(struct CGSize { double x0; double x1; })a1 font:(id)a2;
+ (id)viewWithImage:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;
- (void)layoutSubviews;
- (void)updateWithReasonItems:(id)a0 config:(id)a1;
- (void).cxx_destruct;

@end

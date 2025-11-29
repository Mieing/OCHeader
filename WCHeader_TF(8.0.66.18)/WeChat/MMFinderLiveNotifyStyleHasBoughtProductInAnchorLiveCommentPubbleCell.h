@class UILabel;

@interface MMFinderLiveNotifyStyleHasBoughtProductInAnchorLiveCommentPubbleCell : MMFinderLiveNotifyStyleCommentPubbleCell

@property (retain, nonatomic) UILabel *label;

+ (double)cornerRadius;
+ (struct CGSize { double x0; double x1; })preferSizeForCellFrame:(id)a0 inWidth:(double)a1;
+ (id)attributedStringForContent:(id)a0;

- (id)initWithCellFrame:(id)a0;
- (void)layoutSubviews;
- (id)finderLiveViewController;
- (void)runCustomEnterAnimation;
- (void)onTap;
- (void).cxx_destruct;

@end

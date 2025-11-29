@class UILabel, WCListFeedVideoThumbView, UIView;

@interface WCListFeedCellView : WCListBaseCellView {
    UIView *m_tailView;
}

@property (retain, nonatomic) UILabel *finderPureTextLabel;
@property (retain, nonatomic) WCListFeedVideoThumbView *videoThumbView;

+ (double)calculateHeightWithGroup:(id)a0 groupItem:(id)a1 width:(double)a2 isFirstOneInsection:(BOOL)a3 isLastOneInSection:(BOOL)a4;
+ (id)titleWithDataItem:(id)a0;
+ (id)trimDescWithDataItem:(id)a0;

- (double)maxLabelWidth;
- (double)tailViewHeight;
- (void)initTailView;
- (void)initView;
- (id)titleText;
- (id)trimDesc;
- (void)prepareReuse;
- (void)onClickEvent;
- (void)setNormalColor;
- (void)setHighlightedColor;
- (void)updateAccessibility;
- (id)customAccessibilityComponents;
- (void).cxx_destruct;

@end

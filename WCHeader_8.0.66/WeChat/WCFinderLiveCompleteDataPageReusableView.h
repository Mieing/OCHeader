@class MMUIImageView, UIImageView, MMUIButton, AnchorCloseLivePageDataUnit;

@interface WCFinderLiveCompleteDataPageReusableView : UICollectionReusableView

@property (retain, nonatomic) AnchorCloseLivePageDataUnit *pageDataUnit;
@property (retain, nonatomic) MMUIImageView *iconImageView;
@property (retain, nonatomic) MMUIButton *titleButton;
@property (retain, nonatomic) MMUIButton *detailButton;
@property (retain, nonatomic) UIImageView *arrowView;
@property (copy, nonatomic) id /* block */ dataViewBlock;

+ (id)identifier;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (void)titleClick;
- (void)detailClick;
- (void)updateWithPageData:(id)a0;
- (void)configViewAccessibility;
- (unsigned long long)accessibilityTraits;
- (void)updateViewAccessibilityInfo;
- (void).cxx_destruct;

@end

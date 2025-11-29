@class UIButton, AnchorCloseLivePageDataItem, MMUILabel;

@interface WCFinderLiveCompleteDataPageCell : UICollectionViewCell

@property (retain, nonatomic) AnchorCloseLivePageDataItem *pageDataItem;
@property (nonatomic) BOOL clickEnable;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *numberLabel;
@property (retain, nonatomic) MMUILabel *subTitleLabel;
@property (retain, nonatomic) UIButton *clickButton;
@property (copy, nonatomic) id /* block */ itemSelectBlock;

+ (id)identifier;

- (void)updateWithePageDataItem:(id)a0 clickEnable:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (void)dataViewClick;
- (void)configViewAccessibility;
- (unsigned long long)accessibilityTraits;
- (void)updateViewAccessibilityInfo;
- (void).cxx_destruct;

@end

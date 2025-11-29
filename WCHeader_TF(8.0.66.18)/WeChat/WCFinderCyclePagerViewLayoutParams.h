@class UICollectionReusableView, UIView;

@interface WCFinderCyclePagerViewLayoutParams : NSObject

@property (weak, nonatomic) UIView *pageView;
@property (nonatomic) struct CGSize { double width; double height; } itemSize;
@property (nonatomic) double itemSpacing;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } sectionInset;
@property (retain, nonatomic) UICollectionReusableView *footerView;
@property (nonatomic) BOOL isInfiniteLoop;
@property (nonatomic) BOOL itemVerticalCenter;
@property (nonatomic) BOOL itemHorizontalCenter;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } onlyOneSectionInset;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } firstSectionInset;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } lastSectionInset;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } middleSectionInset;

- (id)init;
- (void).cxx_destruct;

@end

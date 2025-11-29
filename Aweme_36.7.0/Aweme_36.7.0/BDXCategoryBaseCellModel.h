@interface BDXCategoryBaseCellModel : NSObject

@property (nonatomic) unsigned long long index;
@property (nonatomic) double cellWidth;
@property (nonatomic) double cellSpacing;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic, getter=isCellWidthZoomEnabled) BOOL cellWidthZoomEnabled;
@property (nonatomic) double cellWidthNormalZoomScale;
@property (nonatomic) double cellWidthCurrentZoomScale;
@property (nonatomic) double cellWidthSelectedZoomScale;
@property (nonatomic, getter=isSelectedAnimationEnabled) BOOL selectedAnimationEnabled;
@property (nonatomic) double selectedAnimationDuration;
@property (nonatomic) unsigned long long selectedType;
@property (nonatomic, getter=isTransitionAnimating) BOOL transitionAnimating;

@end

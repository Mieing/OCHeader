@class NSArray, UIColor;

@interface BDXCategoryDotView : BDXCategoryTitleView

@property (nonatomic) unsigned long long relativePosition;
@property (retain, nonatomic) NSArray *dotStates;
@property (nonatomic) struct CGSize { double width; double height; } dotSize;
@property (nonatomic) double dotCornerRadius;
@property (retain, nonatomic) UIColor *dotColor;
@property (nonatomic) struct CGPoint { double x; double y; } dotOffset;

- (void)initializeData;
- (void)refreshDataSource;
- (void)refreshCellModel:(id)a0 index:(long long)a1;
- (Class)preferredCellClass;
- (void).cxx_destruct;

@end

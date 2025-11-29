@class UIColor;

@interface BDXCategoryDotCellModel : BDXCategoryTitleCellModel

@property (nonatomic) BOOL dotHidden;
@property (nonatomic) unsigned long long relativePosition;
@property (nonatomic) struct CGSize { double width; double height; } dotSize;
@property (nonatomic) double dotCornerRadius;
@property (retain, nonatomic) UIColor *dotColor;
@property (nonatomic) struct CGPoint { double x; double y; } dotOffset;

- (void).cxx_destruct;

@end

@class NSArray, UIColor;

@interface IESIMContactPickerSectionLayoutAttributes : UICollectionViewLayoutAttributes

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } decorationInsets;
@property (nonatomic) double borderWidth;
@property (copy, nonatomic) NSArray *gradientBorderColors;
@property (nonatomic) double cornerRadius;
@property (nonatomic) unsigned long long corner;
@property (retain, nonatomic) UIColor *backgroundColor;

- (void).cxx_destruct;

@end

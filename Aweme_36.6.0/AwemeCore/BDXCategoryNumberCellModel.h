@class NSString, UIColor, UIFont;

@interface BDXCategoryNumberCellModel : BDXCategoryTitleCellModel

@property (nonatomic) long long count;
@property (copy, nonatomic) NSString *numberString;
@property (readonly, nonatomic) double numberStringWidth;
@property (copy, nonatomic) id /* block */ numberStringFormatterBlock;
@property (retain, nonatomic) UIColor *numberBackgroundColor;
@property (retain, nonatomic) UIColor *numberTitleColor;
@property (nonatomic) double numberLabelWidthIncrement;
@property (nonatomic) double numberLabelHeight;
@property (retain, nonatomic) UIFont *numberLabelFont;
@property (nonatomic) struct CGPoint { double x; double y; } numberLabelOffset;
@property (nonatomic) BOOL shouldMakeRoundWhenSingleNumber;

- (void)updateNumberSizeWidthIfNeeded;
- (void).cxx_destruct;

@end

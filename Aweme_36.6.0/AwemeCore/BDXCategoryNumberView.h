@class NSArray, UIFont, UIColor;

@interface BDXCategoryNumberView : BDXCategoryTitleView

@property (retain, nonatomic) NSArray *counts;
@property (copy, nonatomic) id /* block */ numberStringFormatterBlock;
@property (retain, nonatomic) UIFont *numberLabelFont;
@property (retain, nonatomic) UIColor *numberBackgroundColor;
@property (retain, nonatomic) UIColor *numberTitleColor;
@property (nonatomic) double numberLabelWidthIncrement;
@property (nonatomic) double numberLabelHeight;
@property (nonatomic) struct CGPoint { double x; double y; } numberLabelOffset;
@property (nonatomic) BOOL shouldMakeRoundWhenSingleNumber;

- (void)initializeData;
- (void)refreshDataSource;
- (void)refreshCellModel:(id)a0 index:(long long)a1;
- (Class)preferredCellClass;
- (void).cxx_destruct;
- (void)dealloc;

@end

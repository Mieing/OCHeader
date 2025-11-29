@class UIFont, UIColor, NSNumber, NSMutableArray;

@interface AWEPOICommentScrollNumberView : UIView

@property (retain, nonatomic) NSNumber *currentNumber;
@property (retain, nonatomic) NSNumber *targetNumber;
@property (retain, nonatomic) NSMutableArray *cells;
@property (nonatomic) unsigned long long rowNumber;
@property (nonatomic) double cellWidth;
@property (nonatomic) double numberCellHeight;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (copy, nonatomic) id /* block */ sizeDidChange;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;

- (void)setupCells;
- (id)initWithCurrentValue:(long long)a0 font:(id)a1 textColor:(id)a2;
- (long long)addByOneWithAnimated:(BOOL)a0;
- (long long)minusByOneWithAnimated:(BOOL)a0;
- (void)changeToNumber:(id)a0 animated:(BOOL)a1;
- (long long)rowsOfNumber:(long long)a0;
- (id)valuesOfNumber:(long long)a0;
- (id)cellMaker;
- (double)cellWidthWith:(long long)a0;
- (void)moveNumberCell:(id)a0 toNumber:(long long)a1;
- (void)updateToRows:(long long)a0;
- (void)playAnimationWithChange:(long long)a0 previousNumber:(id)a1;
- (id)repeatTimesWithChangeNumber:(long long)a0 targetNumber:(long long)a1;
- (void)removeAllCellFromSuperview;
- (void)updateCellModelToFitRowNumber:(long long)a0;
- (void)updateCellLayoutToFitRowNumber:(unsigned long long)a0 withAnimation:(BOOL)a1;
- (void)changeToNumber:(id)a0;
- (void).cxx_destruct;
- (void)setup;
- (double)totalWidth;

@end

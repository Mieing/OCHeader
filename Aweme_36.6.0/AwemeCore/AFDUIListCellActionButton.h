@class NSString, AFDUIListCellActionButtonColorModel;

@interface AFDUIListCellActionButton : UIButton

@property (nonatomic) BOOL isAttentionState;
@property (copy, nonatomic) NSString *attentionTitle;
@property (copy, nonatomic) NSString *normalTitle;
@property (retain, nonatomic) AFDUIListCellActionButtonColorModel *colorModel;

+ (double)suggestedWidthForTitle:(id)a0 font:(id)a1 padding:(double)a2;
+ (double)suggestedWidthForTitles:(id)a0 font:(id)a1 padding:(double)a2;
+ (double)maxWidthFittingTitles:(id)a0 font:(id)a1;
+ (double)suggestedWidthForTitle:(id)a0 font:(id)a1;
+ (double)suggestedWidthForTitles:(id)a0 font:(id)a1;
+ (double)expectedWidthForTitleArray:(id)a0;
+ (void)setTextPreProcessor:(id /* block */)a0;

- (void)awe_themeReload;
- (id)attributedStringForString:(id)a0 color:(id)a1;
- (id)attributedStringForString:(id)a0 color:(id)a1 font:(id)a2;
- (void)setTitle:(id)a0 icon:(id)a1 padding:(double)a2 requiresAttention:(BOOL)a3;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

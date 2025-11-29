@class UIFont, NSString, UIColor, UIView, NSMutableArray;

@interface AWEIncentiveElegantScrollNumberView : UIView

@property (copy, nonatomic) NSString *currentNumberPattern;
@property (nonatomic) struct CGSize { double width; double height; } unitSize;
@property (nonatomic) unsigned long long defaultFontSize;
@property (retain, nonatomic) UIView *scrollNumberContainer;
@property (retain, nonatomic) NSMutableArray *scrollUnitViews;
@property (retain, nonatomic) UIFont *unitFont;
@property (retain, nonatomic) UIColor *unitColor;

- (id)initWithScrollNumberPattern:(id)a0 unitFont:(id)a1 unitColor:(id)a2 defaultFontSize:(unsigned long long)a3;
- (void)setNumberPattern:(id)a0 animated:(BOOL)a1;
- (void)setNumberPattern:(id)a0 needBitsChangeAnim:(BOOL)a1 bitsDuration:(double)a2 bitsDelay:(double)a3 needScrollAnim:(BOOL)a4 scrollDuration:(double)a5 scrollBaseDelay:(double)a6 scrollIntervalTime:(double)a7 timingFunction:(id)a8;
- (BOOL)isPureInt:(id)a0;
- (void)createUnits;
- (void)fixUnitsWithAnim:(BOOL)a0 duration:(double)a1 delay:(double)a2;
- (void).cxx_destruct;

@end

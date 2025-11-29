@class UIFont, UIColor, NSString, UIView, NSMutableArray;

@interface AWEIncentiveElegantScrollUnitView : UIView

@property (nonatomic) BOOL canScroll;
@property (nonatomic) struct CGSize { double width; double height; } unitSize;
@property (nonatomic) unsigned long long defaultFontSize;
@property (retain, nonatomic) UIView *unitContainer;
@property (retain, nonatomic) NSMutableArray *digitLabels;
@property (nonatomic) long long currentDigit;
@property (retain, nonatomic) UIFont *unitFont;
@property (retain, nonatomic) UIColor *unitColor;
@property (copy, nonatomic) NSString *staticContent;

- (id)initWithScrollDigit:(long long)a0 unitFont:(id)a1 unitColor:(id)a2 defaultFontSize:(unsigned long long)a3;
- (void)setDigit:(long long)a0 animated:(BOOL)a1 duration:(double)a2 baseDelayTime:(double)a3 timingFunction:(id)a4;
- (void)createDigits;
- (void)createStaticString;
- (void)updateContainerPosition;
- (id)initWithStaticContent:(id)a0 unitFont:(id)a1 unitColor:(id)a2 defaultFontSize:(unsigned long long)a3;
- (void)setDigitColor:(id)a0;
- (void)setDigit:(long long)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end

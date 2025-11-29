@class NSNumber;

@interface CJPayButton : UIButton

@property (nonatomic) double cjEventInterval;
@property (retain, nonatomic) NSNumber *cjEventUnavailable;
@property (nonatomic) BOOL disableHightlightState;
@property (nonatomic) BOOL disableTitleColorChangeWithState;

- (id)cj_performanceMonitorName;
- (void)setBtnTitleColor:(id)a0;
- (void)setBtnBGColor:(id)a0 forState:(unsigned long long)a1;
- (void)setBtnTitleColor:(id)a0 forState:(unsigned long long)a1;
- (void)setBtnImageWithName:(id)a0;
- (void)setBtnImageWithName:(id)a0 forState:(unsigned long long)a1;
- (void)setBtnBGColor:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)sendAction:(SEL)a0 to:(id)a1 forEvent:(id)a2;

@end

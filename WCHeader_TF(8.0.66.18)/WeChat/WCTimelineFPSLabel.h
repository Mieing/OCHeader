@class NSString, UIFont;

@interface WCTimelineFPSLabel : UILabel <WCTimelineFPSMonitorDelegate>

@property (retain, nonatomic) UIFont *mainfont;
@property (retain, nonatomic) UIFont *subFont;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)updateFps:(float)a0;
- (void)onTick:(float)a0;
- (id)observerIdentifier;
- (void).cxx_destruct;

@end

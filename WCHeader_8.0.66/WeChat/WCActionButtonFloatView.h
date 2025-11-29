@class NSString, WCDataItem, UIButton;

@interface WCActionButtonFloatView : MMUIView <CAAnimationDelegate>

@property (nonatomic) struct CGPoint { double x; double y; } showPoint;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) WCDataItem *dataItem;
@property (retain, nonatomic) UIButton *actionButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTitle:(id)a0;
- (void)showWithItemData:(id)a0 tipPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)hide;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void).cxx_destruct;

@end

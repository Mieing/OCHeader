@class NSObject;
@protocol IESIMBubble;

@interface AWEIMPlusPanelFunctionEntryMaskTipView : UIView

@property (retain, nonatomic) NSObject<IESIMBubble> *bubble;

+ (void)showBubbleForView:(id)a0 content:(id)a1;
+ (void)showPopoverBubbleForView:(id)a0 content:(id)a1;
+ (id)showBubbleForView:(id)a0 content:(id)a1 alignLeft:(BOOL)a2;

- (void)dismiss;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end

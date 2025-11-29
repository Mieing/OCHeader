@class NSMutableDictionary, DUXPopover;

@interface AWEGrouponBubbleCoordinator : NSObject

@property (retain, nonatomic) NSMutableDictionary *bubbleStorage;
@property (retain, nonatomic) NSMutableDictionary *bubbleExtraParamsStorage;
@property (weak, nonatomic) DUXPopover *duxpopover;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)appEnterBackground;
- (id)addressOfModel:(id)a0;
- (BOOL)showBubbleWith:(id)a0 on:(id)a1 inView:(id)a2 onActionClick:(id /* block */)a3 onCloseClick:(id /* block */)a4 onBackgroundClick:(id /* block */)a5;
- (void)trackBubbleShowError:(id)a0 reason:(id)a1;
- (void)hideBubbleWith:(id)a0 dismissType:(unsigned long long)a1;
- (void)trackBubbleNormalAction:(id)a0 action:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getBubbleViewFrameWithPositon:(long long)a0 size:(struct CGSize { double x0; double x1; })a1 targetPointY:(double)a2;
- (void)trackBubbleClickError:(id)a0 reason:(id)a1;
- (void)hideBubbleWith:(id)a0;
- (void)hideAllBubble;
- (void)setBubbleLogExtraParams:(id)a0 for:(id)a1;
- (BOOL)showBubbleWith:(id)a0 on:(id)a1 inView:(id)a2;
- (BOOL)showBubbleWith:(id)a0 on:(id)a1 inView:(id)a2 onActionClick:(id /* block */)a3;
- (BOOL)showBubbleWith:(id)a0 on:(id)a1 inView:(id)a2 onActionClick:(id /* block */)a3 onCloseClick:(id /* block */)a4;
- (id)showGuideTipsWithModel:(id)a0 inView:(id)a1 on:(id)a2 onActionClick:(id /* block */)a3 onCloseClick:(id /* block */)a4 onBackgroundClick:(id /* block */)a5;
- (void)hideMultiTabBuble;
- (void)storeDuxpopover:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

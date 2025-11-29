@class LynxAnimationInfo, NSMutableDictionary, LynxUI;

@interface LynxLayoutAnimationManager : NSObject

@property (weak, nonatomic) LynxUI *ui;
@property (retain, nonatomic) NSMutableDictionary *animationDelegates;
@property (retain, nonatomic) LynxAnimationInfo *createConfig;
@property (retain, nonatomic) LynxAnimationInfo *updateConfig;
@property (retain, nonatomic) LynxAnimationInfo *deleteConfig;

- (id)initWithLynxUI:(id)a0;
- (BOOL)isConfigValid:(id)a0;
- (BOOL)isCreate:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 newFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)performCreateAnimationsWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isDelete:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 newFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)performDeleteAnimationsWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isUpdate:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 newFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)performUpdateAnimationsWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addAnimation:(id)a0 withInfo:(id)a1;
- (void)forceStop:(id)a0;
- (id)createDelegate:(id)a0;
- (BOOL)maybeUpdateFrameWithLayoutAnimation:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withPadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 border:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 margin:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a3;
- (void)removeAllLayoutAnimation;
- (void).cxx_destruct;

@end

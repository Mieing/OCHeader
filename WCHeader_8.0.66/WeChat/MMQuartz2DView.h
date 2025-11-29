@class NSString, NSMutableArray, NSMutableDictionary;
@protocol IMMQuartz2DDelegate;

@interface MMQuartz2DView : UIView <IMMQuartz2DContextDelegate> {
    NSMutableArray *_drawObjs;
    NSMutableDictionary *_context;
    NSMutableArray *_contextStack;
    long long _touchId;
    NSMutableDictionary *_touches;
    BOOL _touched;
}

@property (nonatomic) unsigned int canvasId;
@property (retain, nonatomic) NSString *userData;
@property (nonatomic) int interactionMode;
@property (weak, nonatomic) id<IMMQuartz2DDelegate> canvasDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)getString:(id)a0;
- (id)getMethodData:(id)a0 forMethod:(id)a1;
- (void)setDrawActions:(id)a0 reset:(BOOL)a1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)canvasToImageOffScreenWithScale:(double)a0;
- (id)getContext:(id)a0;
- (void)setContext:(id)a0 forKey:(id)a1;
- (void)removeContext:(id)a0;
- (void)saveContext;
- (void)restoreContext;
- (void)recreateContext;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (long long)getTouchID:(id)a0 remove:(BOOL)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)onLongPress:(id)a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (id)getImage;
- (id)getImageDataWithTargetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end

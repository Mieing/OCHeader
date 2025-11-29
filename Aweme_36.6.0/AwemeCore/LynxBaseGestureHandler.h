@class LynxUIContext, NSMutableDictionary, LynxGestureDetectorDarwin;
@protocol LynxGestureArenaMember;

@interface LynxBaseGestureHandler : NSObject

@property (nonatomic) int status;
@property (retain, nonatomic) NSMutableDictionary *enableFlags;
@property (readonly, nonatomic) LynxGestureDetectorDarwin *gestureDetector;
@property (readonly, weak, nonatomic) id<LynxGestureArenaMember> gestureMember;
@property (readonly, nonatomic) long long sign;
@property (readonly, weak, nonatomic) LynxUIContext *context;

+ (id)convertToGestureHandler:(long long)a0 context:(id)a1 member:(id)a2 gestureDetectors:(id)a3;

- (void)handleEnableGestureCallback:(id)a0;
- (id)initWithSign:(long long)a0 context:(id)a1 member:(id)a2 detector:(id)a3;
- (BOOL)isGestureTypeMatched:(unsigned long long)a0;
- (void)onBegin:(struct CGPoint { double x0; double x1; })a0 touchEvent:(id)a1;
- (void)onUpdate:(struct CGPoint { double x0; double x1; })a0 touchEvent:(id)a1;
- (void)onEnd:(struct CGPoint { double x0; double x1; })a0 touchEvent:(id)a1;
- (void)onHandle:(id)a0 touches:(id)a1 event:(id)a2 touchEvent:(id)a3 flingPoint:(struct CGPoint { double x0; double x1; })a4;
- (id)eventParamsFromTouchEvent:(id)a0;
- (void)sendGestureEvent:(id)a0 params:(id)a1;
- (BOOL)canActiveWithCurrentGesture:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isCurrentGestureEnd;
- (void)begin:(unsigned long long)a0 point:(struct CGPoint { double x0; double x1; })a1 touches:(id)a2 event:(id)a3 touchEvent:(id)a4;
- (void)update:(unsigned long long)a0 point:(struct CGPoint { double x0; double x1; })a1 touches:(id)a2 event:(id)a3 touchEvent:(id)a4;
- (void)end:(unsigned long long)a0 point:(struct CGPoint { double x0; double x1; })a1 touches:(id)a2 event:(id)a3 touchEvent:(id)a4;
- (void)handleConfigMap:(id)a0;
- (void)handleUIEvent:(id)a0 touches:(id)a1 event:(id)a2 touchEvent:(id)a3 flingPoint:(struct CGPoint { double x0; double x1; })a4;
- (void)onStart:(struct CGPoint { double x0; double x1; })a0 touchEvent:(id)a1;
- (BOOL)onBeginEnabled;
- (BOOL)onStartEnabled;
- (BOOL)onUpdateEnabled;
- (BOOL)onEndEnabled;
- (void)onTouchesDown:(id)a0;
- (void)onTouchesMove:(id)a0;
- (void)onTouchesUp:(id)a0;
- (void)onTouchesCancel:(id)a0;
- (BOOL)isEnd;
- (void).cxx_destruct;
- (void)activate;
- (void)reset;
- (void)begin;
- (void)end;
- (BOOL)isActive;
- (void)ignore;
- (void)fail;

@end

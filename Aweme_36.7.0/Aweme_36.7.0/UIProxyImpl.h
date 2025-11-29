@class NSMutableDictionary, NSString, LynxUIOwner, RelaxEngineProxy, NSMutableSet;

@interface UIProxyImpl : NSObject <UIProxy>

@property (weak, nonatomic) LynxUIOwner *uiOwner;
@property (weak, nonatomic) RelaxEngineProxy *engineProxy;
@property (retain, nonatomic) NSMutableDictionary *propMap;
@property (retain, nonatomic) NSMutableDictionary *eventMap;
@property (retain, nonatomic) NSMutableSet *dirtyNodeId;
@property (nonatomic) BOOL needSetDrawEvent;
@property (copy, nonatomic) id /* block */ onTouchEventCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)DestroyAllNodes;
- (int)IndexOf:(int)a0;
- (void)UpdateKeyFramesData:(id)a0;
- (void)InsertNodeBefore:(int)a0 child:(int)a1 ref:(int)a2;
- (void)RemoveNode:(int)a0 child:(int)a1;
- (void)DidUpdateStyleAndAttribute:(int)a0 flatten:(BOOL)a1;
- (void)DestroyNode:(int)a0 child:(int)a1;
- (void)UpdateLayoutResult:(id)a0;
- (BOOL)CreateNode:(int)a0 name:(id)a1 flatten:(BOOL)a2 props:(id)a3;
- (void)AddEvent:(int)a0 event:(id)a1;
- (void)UpdateAttribute:(int)a0 attrId:(int)a1 value:(id)a2;
- (void)SetOnHandleTouchEvent:(id /* block */)a0;
- (void)SetOnHandleCustomEvent:(id /* block */)a0;
- (void)LayoutDidFinish;
- (void)UpdateAttributeByName:(int)a0 attr:(id)a1 value:(id)a2;
- (void)InvokeUIMethod:(int)a0 method:(id)a1 callback:(id /* block */)a2 params:(id)a3 returnType:(id)a4;
- (void)UpdateStyle:(int)a0 styleId:(int)a1 style:(id)a2;
- (id)initWithUIOwner:(id)a0 relaxEngineProxy:(id)a1;
- (id)checkTagAndConvert:(id)a0;
- (struct { int x0; float x1; float x2; float x3; float x4; float x5[4]; float x6[4]; float x7[4]; })extractLayoutInfoAtIndex:(long long)a0 fromArray:(id)a1;
- (void).cxx_destruct;

@end

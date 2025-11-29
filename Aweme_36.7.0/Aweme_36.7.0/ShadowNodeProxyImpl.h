@class NSMutableDictionary, NSString, LynxUIOwner, LynxShadowNodeOwner;

@interface ShadowNodeProxyImpl : NSObject <ShadowNodeProxy> {
    void *_layoutNodeManager;
}

@property (weak, nonatomic) LynxShadowNodeOwner *nodeOwner;
@property (weak, nonatomic) LynxUIOwner *uiOwner;
@property (retain, nonatomic) NSMutableDictionary *styleAttributeMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)CreateNode:(int)a0 name:(id)a1;
- (void)DestroyAllNodes;
- (void)SetFontFaces:(id)a0;
- (void)AddLayoutEventProps:(int)a0 key:(id)a1;
- (void)AlignByDelegate:(int)a0;
- (void)InsertNodeBefore:(int)a0 child:(int)a1 ref:(int)a2;
- (void)RemoveNode:(int)a0 child:(int)a1;
- (void)DidUpdate:(int)a0;
- (void)DestroyNode:(int)a0;
- (void)DispatchLayoutResult:(id)a0;
- (int)CreateNode:(int)a0 name:(id)a1 props:(id)a2;
- (void)UpdateProps:(int)a0 attrId:(int)a1 props:(id)a2;
- (void)SetLayoutContext:(long long)a0;
- (void)OnLayoutAfter:(int)a0;
- (void)OnLayoutBefore:(int)a0;
- (void)UpdatePropsByName:(int)a0 attr:(id)a1 props:(id)a2;
- (id)MeasureByDelegate:(int)a0 width:(double)a1 widthMode:(int)a2 height:(double)a3 heightMode:(int)a4;
- (id)initWithLynxUIOwner:(id)a0 shadowNodeOwner:(id)a1;
- (id)checkTagAndConvert:(id)a0;
- (int)indexOfNode:(int)a0 parentNode:(int)a1;
- (void).cxx_destruct;

@end

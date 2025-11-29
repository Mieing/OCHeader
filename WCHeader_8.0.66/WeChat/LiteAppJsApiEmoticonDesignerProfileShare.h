@class NSString, StoreEmotionPageShareLogic, PersonalDesigner;

@interface LiteAppJsApiEmoticonDesignerProfileShare : LiteAppJsApi <StoreEmotionPageShareLogicDelegate>

@property (retain, nonatomic) StoreEmotionPageShareLogic *shareLogic;
@property (retain, nonatomic) PersonalDesigner *personalDesigner;
@property (retain, nonatomic) NSString *oldRedirectUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invokeJsApi:(id)a0 param:(id)a1 isFromView:(BOOL)a2;
- (void)endWithOK;
- (id)getViewController;
- (void)onShareEnded;
- (void).cxx_destruct;

@end

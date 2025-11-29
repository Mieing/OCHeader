@class NSString, StoreEmotionPageShareLogic;

@interface LiteAppJsApiEmoticonDetailPageShare : LiteAppJsApi <StoreEmotionPageShareLogicDelegate>

@property (retain, nonatomic) StoreEmotionPageShareLogic *shareLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invokeJsApi:(id)a0 param:(id)a1 isFromView:(BOOL)a2;
- (void)endWithOK;
- (BOOL)hasNecessaryShareInfo:(id)a0;
- (id)getViewController;
- (void)onShareEnded;
- (void).cxx_destruct;

@end

@class NSString;

@interface AWEShareReflowStrategyIncentiveChat : NSObject <AWEShareReflowStrategy>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getSettingAWEIncentiveChatReflowViewConfigModel;
+ (void)handleRouterTransferWithParams:(id)a0;

- (id)currentPageReferString;
- (id)initWithModel:(id)a0 longURL:(id)a1;
- (BOOL)shouldAvoidSamePageWithModel:(id)a0;
- (BOOL)enableTransferDirectly;
- (BOOL)shouldDelayTokenFind;
- (void)transferWithModel:(id)a0 params:(id)a1 longURL:(id)a2 tokenFromType:(long long)a3;
- (void)configReflowCardWithModel:(id)a0 tokenFromType:(long long)a1 trackParams:(id)a2 reportParams:(id)a3 turnToShareBlock:(id /* block */)a4 reshowCardViewBlock:(id /* block */)a5 completion:(id /* block */)a6;
- (void)configWithSchemaParams:(id)a0 completion:(id /* block */)a1;
- (id)configPrivateChatReflowViewWithModel:(id)a0 inviterDevicePlatform:(id)a1 secActivityInfo:(id)a2 task:(id)a3;
- (id)configGroupChatReflowViewWithModel:(id)a0 convShortID:(id)a1;
- (id)p_getPrivateReflowMainTitleWithModel:(id)a0;
- (id)p_getPrivateReflowSubTitleWithModel:(id)a0;
- (id)p_getPrivateReflowConfirmButtonTextWithModel:(id)a0;
- (id)descriptionText;
- (id)tokenType;

@end

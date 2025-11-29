@class AWEEcomSearchCartContainerModel, NSString, AWESearchGlobalCartModel, AWEEcomPushTimeFeedOutLynxModel, AWEEcomSearchResultPopupModel, AWESearchFeelGoodModel, AWEEcomSearchResultToastInfoModel, AWEDoubleColumnSearchActivityModel;

@interface AWEEcomSearchResultSuspensionLayer : MTLModel <AWEEcomSearchResultModelAdapterProtocol, MTLJSONSerializing>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWESearchFeelGoodModel *feelGood;
@property (retain, nonatomic) AWEEcomPushTimeFeedOutLynxModel *chatbot;
@property (retain, nonatomic) AWEDoubleColumnSearchActivityModel *activityContainer;
@property (retain, nonatomic) AWESearchGlobalCartModel *shoppingCart;
@property (retain, nonatomic) AWEEcomSearchResultPopupModel *popup;
@property (retain, nonatomic) AWEEcomSearchResultToastInfoModel *toast;
@property (retain, nonatomic) AWEEcomSearchCartContainerModel *cartContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)popupJSONTransformer;
+ (id)toastJSONTransformer;
+ (id)activityContainerJSONTransformer;
+ (id)feelGoodJSONTransformer;
+ (id)chatbotJSONTransformer;
+ (id)shoppingCartJSONTransformer;
+ (id)cartContainerJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)fillMerchandiseResp:(id)a0;
- (void).cxx_destruct;

@end

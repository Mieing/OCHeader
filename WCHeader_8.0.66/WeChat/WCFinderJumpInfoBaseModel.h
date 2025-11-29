@class NSString;

@interface WCFinderJumpInfoBaseModel : NSObject <WCFinderJumpInfoProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)liteAppViewControllerIsHalf:(id)a0;
+ (BOOL)getJumpInfoBindHalfScreenLifeCycle:(int)a0;

- (BOOL)dispatchStoreInfo:(id)a0 bindFeedId:(id)a1 fromVC:(id)a2 liteAppVC:(id)a3 params:(id)a4;
- (void)jumpFromVC:(id)a0 withInfo:(id)a1 params:(id)a2;
- (void)jumpToMiniApp:(id)a0 fromVC:(id)a1 params:(id)a2;
- (void)jumpToMiniStore:(id)a0 fromVC:(id)a1 params:(id)a2 productInfo:(id)a3 widgetParameters:(id)a4;
- (id)miniAppAlertReportDict:(id)a0;
- (void)jumpToH5:(id)a0 fromVC:(id)a1 params:(id)a2;
- (void)jumpToNative:(id)a0 fromVC:(id)a1 params:(id)a2;
- (void)jumpToSchema:(id)a0 fromVC:(id)a1 params:(id)a2;
- (void)jumpToAppStoreWithAppStoreParams:(id)a0 screenType:(int)a1 fromVC:(id)a2;
- (void)jumpToMJTemplateCollectionPage:(id)a0 fromVC:(id)a1;
- (void)jumpToCutSameTemplateWithTemplateInfo:(id)a0 params:(id)a1 fromVC:(id)a2;
- (void)jumpToTemplateSearchPage:(id)a0 necessaryParams:(id)a1 fromVC:(id)a2 passParams:(id)a3;
- (void)jumpToLiteApp:(id)a0 fromVC:(id)a1 params:(id)a2;
- (id)customBusinessLiteAppQuery:(id)a0 withInfo:(id)a1;
- (void)jumpToEc:(id)a0 fromVC:(id)a1 params:(id)a2;

@end

@class NSString, NSMutableArray;

@interface IESECMarketingBizManager : NSObject <IESECMarketingManagerService>

@property (retain, nonatomic) NSMutableArray *bridgeHandlerList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;
+ (id)sharedInstance;

- (id)settingsConfig;
- (void)registerEcomMarketingUI;
- (id)loadWithParamsBuilder:(id /* block */)a0;
- (void)sendEventWithTargetPage:(id)a0 rit:(id)a1 component:(id)a2 eventName:(id)a3 params:(id)a4;
- (void)removeWithTargetPage:(id)a0 rit:(id)a1 component:(id)a2;
- (id)registerWithParamsBuilder:(id /* block */)a0;
- (void)showWithParamsBuilder:(id /* block */)a0 completion:(id /* block */)a1;
- (id)getMarketingStorage:(id)a0;
- (void)commonBridgeCallWithAction:(id)a0 params:(id)a1 hostView:(id)a2 completion:(id /* block */)a3;
- (void)registerBridgeHandler;
- (id)addBtmTokenIfNeededWithHandler:(id)a0 params:(id)a1 host:(id)a2;
- (id)getCurrentHandlerMessage;
- (id)loadWithParamsBuilder:(id /* block */)a0 completion:(id /* block */)a1;
- (void)sendEventWithPageId:(id)a0 eventName:(id)a1 params:(id)a2;
- (id)registerWithParamsBuilder:(id /* block */)a0 completion:(id /* block */)a1;
- (id)getMarketingStorage:(id)a0 options:(unsigned long long)a1;
- (void)removeWithPageId:(id)a0 rit:(id)a1 component:(id)a2;
- (void).cxx_destruct;

@end

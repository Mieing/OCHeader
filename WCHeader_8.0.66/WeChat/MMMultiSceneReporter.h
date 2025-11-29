@class NSString;

@interface MMMultiSceneReporter : MMUserService <MMWebViewControllerExtention, MMServiceProtocol>

@property (nonatomic) long long lastScene;
@property (retain, nonatomic) NSString *lastSceneInfo;
@property (nonatomic) long long lastAction;
@property (nonatomic) long long preScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)reportAction:(long long)a0 scene:(long long)a1 bizInfo:(id)a2;
- (void)reportAction:(long long)a0 scene:(long long)a1;
- (void)reportAction:(long long)a0;
- (BOOL)needBizInfo:(long long)a0;
- (void)EX_WebViewControllerDidAppear:(id)a0;
- (void).cxx_destruct;

@end

@class NSString, BDXBridgeContext;

@interface AWEWebPushGuideManager : NSObject <AWEUGPushGuideByPitayaExecutorDelegate, AWEUGPushGuideLifeCycleProtocol>

@property (copy, nonatomic) NSString *scene;
@property (retain, nonatomic) BDXBridgeContext *brideContext;
@property (nonatomic) BOOL needCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showPitayaPushGuide:(id)a0;
- (void)pushGuideShowFail:(id)a0;
- (void)pushGuideShowSuccess:(id)a0;
- (void)pushGuideDismiss:(id)a0;
- (void)pushGuideActionCancel:(id)a0;
- (void)pushGuideActionSettingsBack:(id)a0 isOpen:(BOOL)a1;
- (void).cxx_destruct;

@end

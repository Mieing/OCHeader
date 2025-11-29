@class NSString;
@protocol IESLiveWebViewService;

@interface IESLiveInfrastructureJSBHandler : NSObject <IESLivePiperHandlerProtocol, IESLiveAnnieXBridgeMethodsDependencyProtocol, BDXBridgeLiveReportMonitorProtocol, BDXBridgeLiveGetClientSettingProtocol>

@property (retain, nonatomic) id<IESLiveWebViewService> webViewService;
@property (nonatomic) BOOL shouldLazyCreateCallHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerHandlerWithBridge:(id)a0;
- (void)getClientSettingWithDictionary:(id)a0 callback:(id /* block */)a1;
- (id /* block */)getClientSettingCallHandler;
- (void)getClientSettingWithDictionary:(id)a0 completionHandler:(id /* block */)a1;
- (void)trackEventWithDictionary:(id)a0 completionHandler:(id /* block */)a1;
- (id /* block */)apiParamCallHandler;
- (id /* block */)getPoliticalControlStatusCallHandler;
- (id /* block */)reportLiveTraceCallHandler;
- (void)trackEventWithDictionary:(id)a0 callback:(id /* block */)a1;
- (void).cxx_destruct;

@end

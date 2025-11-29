@class NSString;
@protocol IESLiveMonitor, IESLiveShareService;

@interface IESLiveShareJSBDispatcherImplDouyin : NSObject <IESLiveShareJSBDispatcher>

@property (retain, nonatomic) id<IESLiveMonitor> monitor;
@property (retain, nonatomic) id<IESLiveShareService> shareService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)monitorBridgeName:(id)a0 type:(id)a1 isSucc:(BOOL)a2;
- (void)shareCallHandler:(id)a0 callback:(id /* block */)a1 attachingDI:(id)a2;
- (void).cxx_destruct;

@end

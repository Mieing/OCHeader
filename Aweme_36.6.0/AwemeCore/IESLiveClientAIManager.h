@class NSString;

@interface IESLiveClientAIManager : NSObject <IESLiveClientAIService>

@property (nonatomic) BOOL enabled;
@property (readonly, nonatomic) BOOL isReady;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)runTask:(id)a0 configBlock:(id /* block */)a1 taskCallback:(id /* block */)a2;
- (BOOL)requestUpdateAll;
- (void)requestUpdate:(id)a0 configBlock:(id /* block */)a1 callback:(id /* block */)a2;
- (void)downloadPackage:(id)a0 callback:(id /* block */)a1;
- (void)queryPackage:(id)a0 callback:(id /* block */)a1;
- (void)registerMessageHandler:(id)a0 callback:(id /* block */)a1;
- (void)removeMessageHandler:(id)a0;
- (void)registerAppLogRunEventCallback:(id)a0 callback:(id /* block */)a1;
- (void)releaseEngine:(id)a0;
- (void)releaseAllEngines;
- (id)init;

@end

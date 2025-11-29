@class NSString, NSMutableArray;

@interface IESLLPOITempoService : HTSService <IESLLPOITempoService>

@property (retain, nonatomic) NSMutableArray *placeholder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)handleBroadcastNotification:(id)a0;
- (void)registerLogger:(id)a0;
- (void)onRunloopIdle:(id /* block */)a0;
- (id)generateGlobalProps;
- (void)registerBasicAppMethod:(id)a0;
- (void)registerTemplateProvider;
- (BOOL)trackWithSession:(id)a0 args:(id)a1 responder:(id)a2;
- (id)getValidDitoViewController:(id)a0;
- (void).cxx_destruct;

@end

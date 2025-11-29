@class NSString, AWEMRCommonSubscribePanelTask;

@interface AWEMRCommonSubscribePanelManager : HTSService <AWEMRCommonSubscribePanelTaskDelegate, AWEMRCommonSubscribePanelManager>

@property (retain) AWEMRCommonSubscribePanelTask *task;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requestPanelWithModel:(id)a0 completion:(id /* block */)a1;
+ (void)cancelPanelWithPopId:(id)a0 enterFrom:(id)a1 completion:(id /* block */)a2;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (id)requestPanelWithModel:(id)a0 completion:(id /* block */)a1;
- (void)cancelPanelWithPopId:(id)a0 enterFrom:(id)a1 completion:(id /* block */)a2;
- (id)generatePanelTriggerMonitor;
- (void)trackSLOWithMonitor:(id)a0 status:(long long)a1 errorCode:(long long)a2 errorDesc:(id)a3;
- (void)taskCancelled:(id)a0;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

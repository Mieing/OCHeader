@class NSString, NSMutableArray, BDECRabbiFlyDynamicSupervisor;

@interface BDECRabbiFlyModelChangedNotifier : NSObject <BDECRabbiFlyIModelChangedNotifier>

@property (weak, nonatomic) BDECRabbiFlyDynamicSupervisor *supervisor;
@property (retain, nonatomic) NSMutableArray *processDataStartCallbackList;
@property (retain, nonatomic) NSMutableArray *didLoadJSCallbackList;
@property (retain, nonatomic) NSMutableArray *renderDataUpdateCallbackList;
@property (retain, nonatomic) NSMutableArray *processDataErrorCallbackList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSupervisor:(id)a0;
- (void)notifyProcessDataStart:(id)a0 seqNo:(id)a1;
- (void)notifyProcessDataError:(id)a0 seqNo:(id)a1 message:(id)a2 reason:(id)a3;
- (void)notifyRenderDataUpdate:(id)a0 seqNo:(id)a1;
- (void)registerProcessDataStartCallback:(id /* block */)a0;
- (void)registerDidLoadJSCallback:(id /* block */)a0;
- (void)registerUpdateRenderDataCallback:(id /* block */)a0;
- (void)registerProcessDataErrorCallback:(id /* block */)a0;
- (void)notifyDidLoadJS:(id)a0;
- (void).cxx_destruct;

@end

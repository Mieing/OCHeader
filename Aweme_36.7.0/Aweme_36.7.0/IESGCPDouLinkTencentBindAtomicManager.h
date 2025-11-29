@class IESGCPDouLinkTencentBindAtomicContext, IESGCPFlowMonitorBizParamsModel;

@interface IESGCPDouLinkTencentBindAtomicManager : NSObject

@property (retain, nonatomic) IESGCPDouLinkTencentBindAtomicContext *context;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) id flowAuthToken;
@property (retain, nonatomic) IESGCPFlowMonitorBizParamsModel *flowAuthBizModel;

- (id)initWithFlowAuthBizModel:(id)a0;
- (void)openTencentBindPageWithContext:(id)a0 completion:(id /* block */)a1;
- (void)notifyOpenBindPageResultWithSuccess:(BOOL)a0 bindType:(unsigned long long)a1 failReason:(unsigned long long)a2;
- (void)registerFlowAuthToken;
- (void)removeFlowAuthToken;
- (void).cxx_destruct;

@end

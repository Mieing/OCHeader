@class NSString, IESGCPContextNode, IESGCPTrackingContextImpl, IESGCPTraceContextImpl, IESGCPMonitoringContextImpl;

@interface IESGCPContextImpl : NSObject <IESGCPXPlayContext, IESGCPContext>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) IESGCPContextNode *node;
@property (weak, nonatomic) IESGCPContextImpl *parentContext;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) IESGCPTrackingContextImpl *trackingContextImpl;
@property (retain, nonatomic) IESGCPMonitoringContextImpl *monitoringContextImpl;
@property (retain, nonatomic) IESGCPTraceContextImpl *traceContextImpl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)paramsDictionary;
- (id)traceContext;
- (void)didSetGameCPDIContext;
- (void)addParams:(id)a0;
- (void)removeParams:(id)a0;
- (id)trackingContext;
- (void)clearAllParams;
- (void).cxx_destruct;
- (void)clear;
- (void)addChild:(id)a0;
- (id)monitoringContext;

@end

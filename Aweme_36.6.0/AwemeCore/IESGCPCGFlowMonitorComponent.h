@class NSString, NSMutableDictionary;

@interface IESGCPCGFlowMonitorComponent : IESGCPCGInstanceBaseComponent <IESGCPCGFlowMonitorRouter>

@property (retain, nonatomic) NSMutableDictionary *tokens;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

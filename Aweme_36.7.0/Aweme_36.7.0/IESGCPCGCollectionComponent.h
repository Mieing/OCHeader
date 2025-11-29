@class NSString;

@interface IESGCPCGCollectionComponent : IESGCPCGInstanceBaseComponent <IESGCPCGCollectionRouter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetGameCPDIContext;
- (void)queryCollectStatusWithCompletion:(id /* block */)a0;
- (void)updateCollectStatus:(BOOL)a0 withCompletion:(id /* block */)a1;

@end

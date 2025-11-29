@class NSString, IESGCPApi;

@interface IESGCPSKReserve : NSObject <IESGCPSKReserveInterface>

@property (retain, nonatomic) IESGCPApi *api;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reserveGameWithContext:(id)a0 completion:(id /* block */)a1;
- (void)cancelReserveGameWithContext:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end

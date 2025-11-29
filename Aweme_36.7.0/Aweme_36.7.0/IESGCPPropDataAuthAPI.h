@class IESGCPApi;

@interface IESGCPPropDataAuthAPI : NSObject

@property (retain, nonatomic) IESGCPApi *api;

- (void)updatePropDataAuthStatusWithStatus:(int)a0 completion:(id /* block */)a1;
- (void)requestPropDataAuthStatusWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end

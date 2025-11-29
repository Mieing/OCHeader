@class NSString;

@interface BDPLynxCardUtil : NSObject <BDPLynxCardStateDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bdp_lynxCardMessage:(id)a0 component:(id)a1;
- (void)bdp_lynxCardLifeCycleStateChange:(long long)a0 component:(id)a1 extra:(id)a2;
- (void)bdp_lynxCardError:(id)a0 component:(id)a1 extra:(id)a2;
- (void)subscribeHandlerToPage:(id)a0 component:(id)a1 data:(id)a2;
- (void)subscribeHandlerToService:(id)a0 component:(id)a1 data:(id)a2;

@end

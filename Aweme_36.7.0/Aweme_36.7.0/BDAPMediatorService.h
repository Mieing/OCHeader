@interface BDAPMediatorService : NSObject

+ (id)sharedManager;

- (id)protocolImp;
- (void)logEventWithData:(id)a0;
- (void)monitorServiceWithName:(id)a0 params:(id)a1 extraData:(id)a2;
- (id)initPrivate;
- (id)init;
- (id)netType;

@end

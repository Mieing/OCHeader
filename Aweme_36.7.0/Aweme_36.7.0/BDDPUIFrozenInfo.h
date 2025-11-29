@interface BDDPUIFrozenInfo : NSObject

+ (id)instancetypeInit;

- (id)initWithStart;
- (void)onMaybeHappenFrozenNotification:(id)a0;
- (void)onRecoveryFrozenNotification:(id)a0;
- (void)terminateNotification:(id)a0;
- (void)dealloc;
- (void)setupNotifications;

@end

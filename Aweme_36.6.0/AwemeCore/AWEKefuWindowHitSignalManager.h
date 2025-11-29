@class NSString;

@interface AWEKefuWindowHitSignalManager : NSObject <AWEKefuSignalSenderProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addNotifications;
- (void)onKefuWindowHitNotification:(id)a0;
- (id)init;
- (void)dealloc;
- (void)removeNotifications;

@end

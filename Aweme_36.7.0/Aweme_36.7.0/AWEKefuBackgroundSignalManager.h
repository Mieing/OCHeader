@class NSString;

@interface AWEKefuBackgroundSignalManager : NSObject <AWEKefuSignalSenderProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addNotifications;
- (void)onEnterBackgroundNotification:(id)a0;
- (void)onEnterForegroundNotification:(id)a0;
- (id)init;
- (void)dealloc;
- (void)removeNotifications;

@end

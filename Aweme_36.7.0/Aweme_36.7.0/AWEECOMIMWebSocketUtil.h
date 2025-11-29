@interface AWEECOMIMWebSocketUtil : NSObject

@property (nonatomic) long long needWebSocketPageCount;

+ (id)shared;

- (void)handleDidEnterBackgroundNotification:(id)a0;
- (void)handleWillEnterForegroundNotification:(id)a0;
- (void)subNeedWebSocketPageCount;
- (void)addNeedWebSocketPageCount;
- (void)onWSMessageDidReceive:(id)a0;
- (void)longConnectStateChanageNotification:(id)a0;
- (id)init;

@end

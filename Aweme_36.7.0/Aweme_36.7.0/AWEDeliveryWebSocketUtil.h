@interface AWEDeliveryWebSocketUtil : NSObject

@property (nonatomic) long long needWebSocketPageCount;

+ (id)shared;

- (void)handleDidEnterBackgroundNotification:(id)a0;
- (void)handleWillEnterForegroundNotification:(id)a0;
- (void)subNeedWebSocketPageCount;
- (void)addNeedWebSocketPageCount;
- (void)longConnectStateChangeNotification:(id)a0;
- (id)init;

@end

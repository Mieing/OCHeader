@class NSMutableDictionary;

@interface AWEECMallBehaviorPredictionPitaya : NSObject

@property (retain, nonatomic) NSMutableDictionary *messageDict;
@property (nonatomic) BOOL triggeredOrderListWithoutConsume;

+ (void)registerMallBehaviorMessageHandler;
+ (id)sharedInstance;

- (void)realRegisterMallBehaviorMessageHandler;
- (void)trackerPrefetchEvent:(long long)a0 pitayaStatus:(long long)a1 bizStatus:(long long)a2 message:(id)a3;
- (void)preloadOrderList:(id)a0;
- (void)orderListRenderNoti:(id)a0;
- (void)trackerEnterEvent:(id)a0;
- (id)orderSchemaParams:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

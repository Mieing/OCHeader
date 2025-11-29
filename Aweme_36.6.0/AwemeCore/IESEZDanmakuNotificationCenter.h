@class NSString, NSMutableDictionary, IESEZDanmakuContext;

@interface IESEZDanmakuNotificationCenter : NSObject <IESEZDanmakuComponentProtocol>

@property (retain, nonatomic) IESEZDanmakuContext *context;
@property (retain, nonatomic) NSMutableDictionary *subscribersMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)componentType;

- (void)subscribeNotificationWithEvent:(id)a0 forSubscriber:(id)a1;
- (void)subscribeNotificationWithType:(unsigned long long)a0 forSubscriber:(id)a1;
- (void)notifyEvent:(id)a0 withUserInfo:(id)a1;
- (void)removeSubscribeNotificationWithType:(unsigned long long)a0 forSubscriber:(id)a1;
- (id)notificationEventKeysForNotiType:(unsigned long long)a0;
- (void)removeSubscribeNotificationWithEvent:(id)a0 forSubscriber:(id)a1;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)removeSubscriber:(id)a0;

@end

@class NSHashTable, NSString, IESEZDanmakuContext;

@interface IESEZDanmakuDataControlComponent : NSObject <IESEZDanmakuNotificationSubscriber, IESEZDanmakuComponentProtocol>

@property (retain, nonatomic) IESEZDanmakuContext *context;
@property (retain, nonatomic) NSHashTable *danmakuDatas;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)componentType;

- (void)ezDanmakuNotificationCenter:(id)a0 notiEvent:(id)a1 userInfo:(id)a2;
- (void)prepareStart;
- (id)allDanmakuDatasInQueue;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end

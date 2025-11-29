@class NSMutableDictionary, IESLiveSingleRoomPreloadEntity;

@interface IESLiveSingleRoomStateObserver : NSObject

@property (weak, nonatomic) IESLiveSingleRoomPreloadEntity *entity;
@property (nonatomic) unsigned long long currentStage;
@property (retain, nonatomic) NSMutableDictionary *subscriberPools;

- (BOOL)subscribeRoomStateWithBusinessIndex:(id)a0 callback:(id /* block */)a1;
- (void)removeSubscribeRoomStateWithBusinessIndex:(id)a0;
- (void)notifyRoomStateChange:(unsigned long long)a0;
- (id)subscriberWithBusinessIndex:(id)a0 needCreate:(BOOL)a1;
- (id)initWithEntity:(id)a0;
- (void).cxx_destruct;

@end

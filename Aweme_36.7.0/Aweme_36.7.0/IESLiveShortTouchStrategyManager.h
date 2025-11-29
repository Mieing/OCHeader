@class NSString, NSMutableDictionary;
@protocol IESLiveRoomService;

@interface IESLiveShortTouchStrategyManager : NSObject <IESLiveMessageInteractionStrategyResultSubscriber>

@property (retain, nonatomic) NSMutableDictionary *strategyToType;
@property (retain, nonatomic) NSMutableDictionary *strategyToShortTouch;
@property (retain, nonatomic) NSMutableDictionary *itemsToTriggerTempState;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)decision:(id)a0 result:(id)a1;
- (void)strategyResultChange:(long long)a0 withStrategyKey:(id)a1 withChangeReason:(id)a2;
- (void)detectedStrategyEventWith:(id)a0 result:(long long)a1 reason:(id)a2;
- (void)addObserverForStrategyWithAreaConfigs:(id)a0;
- (void)removeObserverForStrategyWithAreaConfigs:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

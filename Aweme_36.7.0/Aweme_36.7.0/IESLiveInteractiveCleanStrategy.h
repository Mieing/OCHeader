@class NSString;
@protocol IESLiveEffectCleanDelegate;

@interface IESLiveInteractiveCleanStrategy : NSObject <IESLiveEffectCleanStrategyProtocol>

@property (weak, nonatomic) id<IESLiveEffectCleanDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cleanLiveGiftEffectsThroughForeground;
- (long long)handleTrimEffectMoment;
- (void)handleTrimEffectWithContext:(id)a0;
- (void)cleanLiveGiftEffectsInRoomWithContextHolder:(id)a0;
- (void)cleanLiveGiftEffectsThoughLowDiskWithContextHolder:(id)a0;
- (void).cxx_destruct;

@end

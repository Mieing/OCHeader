@class NSString;
@protocol IESLiveEffectCleanDelegate;

@interface IESLiveAssetExpireStrategy : NSObject <IESLiveEffectCleanStrategyProtocol>

@property (nonatomic) long long assetExpireDuration;
@property (nonatomic) long long assetRemoveOnceCount;
@property (nonatomic) long long cleanInterval;
@property (nonatomic) long long lastCleanTime;
@property (weak, nonatomic) id<IESLiveEffectCleanDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

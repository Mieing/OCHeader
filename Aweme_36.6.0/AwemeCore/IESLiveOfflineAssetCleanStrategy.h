@class NSString, NSDate;
@protocol IESLiveEffectCleanDelegate;

@interface IESLiveOfflineAssetCleanStrategy : NSObject <IESLiveEffectCleanStrategyProtocol>

@property (retain, nonatomic) NSDate *lastDeleteInvalidCacheWithGiftListDate;
@property (nonatomic) double deleteInvalidCacheWithGiftListTimeInterval;
@property (weak, nonatomic) id<IESLiveEffectCleanDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

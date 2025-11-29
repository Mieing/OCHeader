@class NSArray, IESLiveCountTimer, NSString, IESLiveEffectsDownloadOptimizeStrategyConfig;
@protocol IESLiveEffectCleanDelegate;

@interface IESLiveLowFrequencyAssetCleanStrategy : NSObject <IESLiveEffectCleanStrategyProtocol>

@property (retain, nonatomic) IESLiveEffectsDownloadOptimizeStrategyConfig *downloadOptimizeStrategyConfig;
@property (retain, nonatomic) IESLiveCountTimer *resourceMiddleCleanTimer;
@property (retain, nonatomic) NSArray *zipSweepMarkAssetsArray;
@property (weak, nonatomic) id<IESLiveEffectCleanDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)handleTrimEffectMoment;
- (void)handleTrimEffectWithContext:(id)a0;
- (void)resetMiddleCleanTimerWithContext:(id)a0;
- (void)cancelMiddleCleanTimer;
- (BOOL)enableDeleteZipSweepAsset;
- (void)cleanLiveGiftEffectsThroughResourceCleanStrategyWithContext:(id)a0;
- (void).cxx_destruct;

@end

@class NSDictionary;

@interface IESLiveEffectsDownloadOptimizeStrategyConfig : NSObject

@property (nonatomic) BOOL assetCleanStrategyEnable;
@property (nonatomic) BOOL assetPortraitCleanStrategyEnable;
@property (nonatomic) long long assetCleanMaxDeleteCount;
@property (nonatomic) double assetCleanGapInterval;
@property (nonatomic) double assetCleanStartTimeAfterExitRoom;
@property (nonatomic) double assetKeepLiveDuration;
@property (nonatomic) long long giftDisplayImmediatelyPolicyType;
@property (retain, nonatomic) NSDictionary *displayImmediatelyConfig;

- (BOOL)liveEffectDownloadOptimizeGiftDisplayImmediatelyFullEnable;
- (BOOL)liveEffectDownloadOptimizeGiftDisplayImmediatelyPartlyEnable;
- (BOOL)liveEffectDownloadOptimizeGiftDisplayImmediatelyAllTabExceptPropertyEnable;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })liveEffectDownloadOptimizeGiftDisplayImmediatelyPartlyGiftRange;
- (void).cxx_destruct;
- (id)init;

@end

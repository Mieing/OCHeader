@class NSCache;

@interface IESLivePlayerUtils : NSObject

@property (class, retain, nonatomic) NSCache *streamDataCache;

+ (id)streamDataDictFromStr:(id)a0;
+ (long long)compareStreamData:(id)a0 anotherStreamData:(id)a1;
+ (BOOL)formatSupportSmoothSwitchWithStreamData:(id)a0;
+ (void)logWithEventKey:(id)a0 callTrace:(id)a1 content:(id)a2;
+ (id)streamIDWithStreamDataStr:(id)a0;
+ (id)cdnCodeWithStreamDataStr:(id)a0;
+ (id)cdnNameWithStreamDataStr:(id)a0;
+ (id)playerLoadStateString:(unsigned long long)a0;
+ (id)playerPlaybackString:(unsigned long long)a0;
+ (long long)dofCodeWithStreamDataStr:(id)a0 currentResolutionType:(id)a1;
+ (long long)layoutWithStreamDataStr:(id)a0 currentResolutionType:(id)a1;
+ (void)logWithEventKey:(id)a0 content:(id)a1;
+ (long long)veLivePlayerResolutionFromString:(id)a0;
+ (unsigned long long)tvlOptionForPlayerOption:(unsigned long long)a0;
+ (long long)tvlPlayerViewRotateTypeFromIESLivePlayerViewRotateType:(long long)a0;
+ (long long)iesPlayerViewRotateTypeFromTTPlayerViewRotateType:(long long)a0;
+ (id)livePlayerResolutionByTVLResolutionType:(long long)a0;
+ (BOOL)isViewDisplayedInScreen:(id)a0;
+ (void)logWithEventKey:(id)a0 callTrace:(id)a1 content:(id)a2 player:(id)a3;
+ (BOOL)checkPlayerIsDisplayedInScreen:(id)a0 ignorePlayerViewHidden:(BOOL)a1;
+ (BOOL)p_decodeStreamDataCacheConfigCountLimit;
+ (BOOL)p_decodeStreamDataCacheConfigEnable;
+ (id)p_decodeStreamDataCacheConfig;
+ (BOOL)compareCDNUrlWithStreamData:(id)a0 anotherStreamData:(id)a1;

@end

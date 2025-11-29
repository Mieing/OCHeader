@class NSDictionary, NSMutableDictionary;

@interface IESGurdExpiredCacheManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *lastCleanDateDictionary;
@property (copy, nonatomic) NSDictionary *targetGroupDictionary;
@property (copy, nonatomic) NSDictionary *targetChannelDictionary;
@property (nonatomic) BOOL clearExpiredCacheEnabled;

+ (id)sharedManager;

- (long long)getClearCacheSize:(int)a0;
- (long long)getClearCacheSizeWithAccesskey:(id)a0 expireAge:(int)a1;
- (void)clearCache:(int)a0 cleanType:(int)a1 completion:(id /* block */)a2;
- (void)clearCacheWithAccesskey:(id)a0 expireAge:(int)a1 cleanType:(int)a2 completion:(id /* block */)a3;
- (BOOL)isExpiredChannelWithActiveMeta:(id)a0 activeMeta:(id)a1 config:(id)a2 timestamp:(long long)a3;
- (void)clearCacheWithConfig:(id)a0 completion:(id /* block */)a1;
- (void)innerClearCacheWithConfig:(id)a0 channels:(id)a1 timestamp:(long long)a2 completion:(id /* block */)a3;
- (void)clearCacheForAccessKey:(id)a0 channel:(id)a1 activeMeta:(id)a2 config:(id)a3 completion:(id /* block */)a4;
- (void)updateTargetGroupDictionary:(id)a0;
- (void)updateTargetChannels:(id)a0;
- (void)clearCacheWhenLowStorage;
- (void).cxx_destruct;

@end

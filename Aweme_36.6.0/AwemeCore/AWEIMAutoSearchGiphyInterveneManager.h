@class NSString, NSSet, NSDictionary;

@interface AWEIMAutoSearchGiphyInterveneManager : NSObject

@property (class, readonly, nonatomic) AWEIMAutoSearchGiphyInterveneManager *sharedManager;

@property (copy, nonatomic) NSString *checksum;
@property (copy, nonatomic) NSSet *queryFilterSet;
@property (copy, nonatomic) NSSet *stickerIDFilterSet;
@property (nonatomic) BOOL disableCache;
@property (copy, nonatomic) NSDictionary *cacheClear;
@property (nonatomic) unsigned long long diskClearMode;
@property (nonatomic) double diskClearTimestamp;
@property (copy, nonatomic) NSSet *diskClearQueries;

- (void)updateWithRawData:(id)a0;
- (BOOL)shouldInterveneWithSearchKey:(id)a0;
- (void)p_deleteAllDatas;
- (void)p_deleteCacheIfNeededWithMode:(unsigned long long)a0 timestamp:(double)a1 queries:(id)a2;
- (void).cxx_destruct;

@end

@interface QDataCacheWorldMap : QDataCacheBase

@property (nonatomic) int sceneType;

+ (void)clearCache;
+ (BOOL)onReceivedSourceConfig:(id)a0 isBingSource:(BOOL)a1;

- (id)initWithVersion:(id)a0;
- (int)tileType;

@end

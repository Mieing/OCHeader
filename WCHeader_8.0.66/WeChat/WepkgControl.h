@class NSMutableArray;

@interface WepkgControl : WXPBGeneratedMessage

@property (nonatomic) BOOL disableForAll;
@property (retain, nonatomic) NSMutableArray *preloadList;
@property (retain, nonatomic) NSMutableArray *preloadIfExistsList;
@property (retain, nonatomic) NSMutableArray *gameWkCacheCapacityList;

+ (void)initialize;

- (void)setGameWkCacheCapacityList:(id)a0;
- (id)gameWkCacheCapacityList;
- (void)setPreloadIfExistsList:(id)a0;
- (id)preloadIfExistsList;
- (void)setPreloadList:(id)a0;
- (id)preloadList;
- (void)setDisableForAll:(BOOL)a0;
- (BOOL)disableForAll;

@end

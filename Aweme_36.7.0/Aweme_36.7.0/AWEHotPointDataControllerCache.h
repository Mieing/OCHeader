@class NSMutableDictionary;

@interface AWEHotPointDataControllerCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *dataControllerCache;
@property (retain, nonatomic) NSMutableDictionary *wordIndexCache;
@property (nonatomic) BOOL alreadyAddPreloadVideoCount;

- (void)removeAllCache;
- (id)dataControllerForKeyword:(id)a0;
- (void)cacheDataController:(id)a0 index:(long long)a1;
- (void)recoverFoldDataController;
- (long long)indexForKeyword:(id)a0;
- (void)cacheDataController:(id)a0;
- (void)cacheDataController:(id)a0 keyword:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end

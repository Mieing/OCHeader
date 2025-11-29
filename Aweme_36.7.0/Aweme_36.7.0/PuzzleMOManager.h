@class PuzzleMOCache;

@interface PuzzleMOManager : NSObject

@property (retain, nonatomic) PuzzleMOCache *cache;

+ (id)sharedInstance;

- (void)addContainer:(id)a0 forURL:(id)a1;
- (id)_identifierForURL:(id)a0;
- (void)_destoryContentForIdentifier:(id)a0;
- (id)_getContainerForIdentifier:(id)a0;
- (id)getContainerForURL:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

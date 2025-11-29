@class NSMapTable;

@interface AWEPlayerCommonDataCache : NSObject

@property (copy, nonatomic) NSMapTable *weakPlayerInfo;
@property (copy, nonatomic) NSMapTable *weakPreloaderInfo;

+ (id)sharedInstance;

- (id)getPlayerData:(id)a0;
- (BOOL)setPlayerData:(id)a0 key:(id)a1;
- (BOOL)setPreloadData:(id)a0 key:(id)a1;
- (id)getPreloadData:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

@class NSMapTable;

@interface AWEChunkDataManager : NSObject

@property (retain, nonatomic) NSMapTable *fingerprintAndModelTable;

+ (id)shareInstance;

- (id)getModel:(id)a0;
- (id)substitudeForBriefModel:(id)a0;
- (long long)filterBriefAwemeList:(id)a0 enterIndex:(long long)a1;
- (void)setModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)cleanData;

@end

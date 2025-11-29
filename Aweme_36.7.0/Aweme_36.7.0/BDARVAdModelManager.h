@class NSMutableDictionary;

@interface BDARVAdModelManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *allModel;
@property (retain, nonatomic) NSMutableDictionary *allCacheByCreatorId;
@property (retain, nonatomic) NSMutableDictionary *allCache;

+ (id)shareManager;

- (void)clearCacheWithKey:(id)a0;
- (id)getItem:(id)a0 key:(id)a1;
- (id)loadAdModelWithoutSecondaryPartition:(id)a0;
- (id)getAdModelFromModelArray:(id)a0;
- (void)setAllTypeItems:(id)a0 key:(id)a1 enableExpire:(BOOL)a2 needSecondaryPartition:(BOOL)a3;
- (id)getItem:(id)a0 key:(id)a1 needSecondaryPartition:(BOOL)a2;
- (long long)getAdCacheCount:(id)a0 key:(id)a1 needSecondaryPartition:(BOOL)a2;
- (void).cxx_destruct;

@end

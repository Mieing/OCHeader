@class NSString, NSMutableDictionary, NSMutableArray;
@protocol AWENewHotSpotSearchFeedLoadHandlerDelegate;

@interface AWENewHotSpotSearchFeedLoadHandler : NSObject <AWENewHotSpotSearchFeedLoadHandlerProtocol>

@property (retain, nonatomic) NSMutableDictionary *hotSearchAwemeListTable;
@property (retain, nonatomic) NSMutableArray *feedDataArray;
@property (nonatomic) long long totalVideoCount;
@property (retain, nonatomic) NSMutableArray *cacheKeyArray;
@property (retain, nonatomic) NSMutableDictionary *cardDataInsertPosArray;
@property (nonatomic) long long totalKeyNum;
@property (nonatomic) long long currentJointKeyNum;
@property (copy, nonatomic) NSString *currentEnterCardKey;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } lock;
@property (weak, nonatomic) id<AWENewHotSpotSearchFeedLoadHandlerDelegate> delegate;
@property (copy, nonatomic) NSString *keyword;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)awemeListForKey:(id)a0;
- (void)updateAwemeList:(id)a0 forKey:(id)a1 supportForEmptyValue:(BOOL)a2 retainExistingData:(BOOL)a3;
- (void)requestForDataWithSessionID:(id)a0 cacheKey:(id)a1 requestPath:(id)a2 requestParams:(id)a3 completion:(id /* block */)a4;
- (id)filterDuplicatedDataWithArray:(id)a0 benchmarkArray:(id)a1 isEqual:(id /* block */)a2;
- (void)substitudeBriefAwemeAndCheckValid;
- (void)requestDataForCardInfo:(id)a0 withCacheKey:(id)a1;
- (long long)insertDataWithCacheKey:(id)a0;
- (void)requestForDataWithCacheKey:(id)a0 requestPath:(id)a1 requestParams:(id)a2 completion:(id /* block */)a3;
- (id)getHotSpotFeedDataArrayWithCardInfos:(id)a0 currentCardKey:(id)a1;
- (BOOL)loadMoreHasFinished;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

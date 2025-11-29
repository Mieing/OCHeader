@class NSString, AWEIndividualWordModel, NSHashTable, AWEIndividualWordsResponseModel;

@interface AWESearchRecommendWordManager : NSObject <AWESearchRecommendWordProtocol>

@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSString *lastQueryId;
@property (retain, nonatomic) NSString *lastGroupId;
@property (retain, nonatomic) NSString *recommendType;
@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) AWEIndividualWordModel *lastRecommendWordModel;
@property (retain, nonatomic) AWEIndividualWordsResponseModel *responseModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)fetchRecommWordWithGroupId:(id)a0 businessID:(id)a1 pd:(id)a2 categoryName:(id)a3 wordsSource:(id)a4 enterFrom:(id)a5 broadcast:(BOOL)a6 completion:(id /* block */)a7;
- (void)fetchRecommWordWithGroupId:(id)a0 businessID:(id)a1 pd:(id)a2 categoryName:(id)a3 wordsSource:(id)a4 query:(id)a5 query_id:(id)a6 enterFrom:(id)a7 broadcast:(BOOL)a8 completion:(id /* block */)a9;
- (void)fetchRecommWordByLastQueryWithBusinessID:(id)a0 pd:(id)a1 categoryName:(id)a2 wordsSource:(id)a3 enterFrom:(id)a4 broadcast:(BOOL)a5 completion:(id /* block */)a6;
- (void)unregisterRecommendWordUpdateObserver:(id)a0;
- (void)registerRecommendWordUpdateObserver:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

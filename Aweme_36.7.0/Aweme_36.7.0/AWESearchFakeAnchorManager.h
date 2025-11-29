@class NSString, NSMutableArray, NSMutableDictionary;

@interface AWESearchFakeAnchorManager : NSObject

@property (copy, nonatomic) NSString *currentGid;
@property (retain, nonatomic) NSMutableArray *commentTopWords;
@property (retain, nonatomic) NSMutableArray *commentEntityWords;
@property (retain, nonatomic) NSMutableArray *currentRelatedSearchWords;
@property (retain, nonatomic) NSMutableArray *nextTimeRelatedSearchWords;
@property (retain, nonatomic) NSMutableArray *guideSearchWords;
@property (retain, nonatomic) NSMutableArray *clickRecomWords;
@property (copy, nonatomic) NSString *searchBarOuterWord;
@property (retain, nonatomic) NSMutableArray *descriptionEntityWords;
@property (retain, nonatomic) NSMutableDictionary *feedBottomWordsDic;
@property (retain, nonatomic) NSMutableArray *guessWords;
@property (retain, nonatomic) NSMutableDictionary *impressionExtraInfo;
@property (copy, nonatomic) NSString *strNextTimeRelatedSearchWordsUploadToken;
@property (copy, nonatomic) NSString *strCurrentRelatedSearchWordsUploadToken;
@property (retain, nonatomic) NSMutableArray *generalMaskedRSInfo;
@property (retain, nonatomic) NSMutableArray *generalMaskedGSInfo;
@property (retain, nonatomic) NSMutableArray *generalMaskedClickRecomInfo;
@property (retain, nonatomic) NSMutableDictionary *fakeWordsDic;
@property (retain, nonatomic) NSMutableDictionary *generalFakeInfoDic;
@property (copy, nonatomic) NSString *fromGroupId;

+ (id)sharedManager;

- (void)updateFeedBottomFakeAnchorForModel:(id)a0 gid:(id)a1;
- (void)updateCommentTopFakeAnchorForModel:(id)a0 gid:(id)a1;
- (void)updateFakeGuessWordsForWords:(id)a0 gid:(id)a1;
- (void)updateSearchBarOuterWordForWord:(id)a0 gid:(id)a1;
- (void)updateClickRecomWordsForWords:(id)a0 gid:(id)a1;
- (void)updateGuideSearchWordsForWords:(id)a0 gid:(id)a1;
- (void)updateRelatedSearchWordsForWords:(id)a0 uploadToken:(id)a1 gid:(id)a2;
- (void)addCommentEntityWord:(id)a0 gid:(id)a1;
- (void)addDescriptionEntityWord:(id)a0 gid:(id)a1;
- (void)addLiveFeedBarKeyword:(id)a0 gid:(id)a1;
- (void)addHotspotFeedBarKeyword:(id)a0 gid:(id)a1;
- (void)addCommentEntityOuter:(id)a0 gid:(id)a1;
- (void)addImpressionExtraInfo:(id)a0 gid:(id)a1;
- (id)maskedSearchParamsForGid:(id)a0;
- (id)maskedSearchParamsForGid:(id)a0 relatedSearchWordsUploadToken:(id)a1;
- (void)removeAllFakeWords;
- (void)updateClickRecomWordsForGeneralMask:(id)a0 searchId:(id)a1;
- (void)updateGSWordsForGeneralMask:(id)a0 searchId:(id)a1;
- (void)updateRSWordsForGeneralMask:(id)a0 searchId:(id)a1;
- (void)updateCommentEntityOuterForGeneralMask:(id)a0 searchId:(id)a1;
- (id)generalMaskedSearchParamsForSearchIDs:(id)a0;
- (id)generalMaskedSearchParamsForSearchId:(id)a0;
- (BOOL)hitOldMaskTypeForGid:(id)a0;
- (id)fetchNextTimeRelatedSearchWordsUploadTokenWhenMaskedSearchFinished;
- (BOOL)enableMaskTrackOpt;
- (BOOL)enableMaskTrackAdd;
- (BOOL)enableMaskTrackFix;
- (id)needMaskTrackScenes;
- (void)cacheFakeWordsWithGid:(id)a0 sceneType:(long long)a1 words:(id)a2 needClear:(BOOL)a3;
- (void)resetNextTimeRelatedSearchWordsIfNeed;
- (id)buildNewMaskedSearchParamsWithGid:(id)a0;
- (void)cacheFakeWordsWithSearchID:(id)a0 sceneType:(long long)a1 info:(id)a2;
- (void)p_updateMaskInfoWith:(id)a0 searchId:(id)a1 currentArray:(id)a2;
- (id)buildFakeWordsParamsWithSearchIDs:(id)a0 sceneType:(long long)a1;
- (id)getCacheFakeInfoWithSearchID:(id)a0 sceneType:(long long)a1;
- (id)getJsonStrKeyWithSceneType:(long long)a0;
- (id)getInfoBySearchId:(id)a0 infoArray:(id)a1;
- (id)getCacheFakeWordsWithGid:(id)a0 sceneType:(long long)a1;
- (id)getSceneKeyWithPreKey:(id)a0 type:(long long)a1;
- (void).cxx_destruct;
- (id)init;

@end

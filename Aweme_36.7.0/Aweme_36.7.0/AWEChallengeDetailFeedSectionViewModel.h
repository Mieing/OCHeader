@class NSError, NSString, NSArray, AWESubChallengeModel, AWEChallengeAwemeListDataController, NSMutableDictionary, NSDictionary, AWEChallengeModel;

@interface AWEChallengeDetailFeedSectionViewModel : AWEBaseListSectionViewModel

@property (copy, nonatomic) NSArray *slideList;
@property (copy, nonatomic) NSArray *taskModels;
@property (nonatomic) long long contentType;
@property (copy, nonatomic) NSString *enterFromPageString;
@property (copy, nonatomic) NSString *enterMethodString;
@property (retain, nonatomic) NSMutableDictionary *logExtraDict;
@property (copy, nonatomic) NSDictionary *searchLogPassback;
@property (copy, nonatomic) NSString *searchType;
@property (copy, nonatomic) NSString *hashTagProcessId;
@property (copy, nonatomic) NSString *hashTagId;
@property (nonatomic) BOOL isHalfScreen;
@property (nonatomic) unsigned long long halfScreenStyle;
@property (nonatomic) BOOL feedDataFirstTimeRequestFinished;
@property (copy, nonatomic) NSString *processId;
@property (copy, nonatomic) NSString *authorID;
@property (nonatomic) BOOL generalSortDataListEmpty;
@property (copy, nonatomic) NSString *fromGroupID;
@property (retain, nonatomic) AWESubChallengeModel *subChallengeModel;
@property (nonatomic) BOOL isSubChallenge;
@property (retain, nonatomic) AWEChallengeAwemeListDataController *dataController;
@property (nonatomic) unsigned long long sortType;
@property (retain, nonatomic) NSError *networkError;
@property (nonatomic) BOOL loadMoreErrorOrEmpty;
@property (readonly, copy, nonatomic) NSString *uniqueKey;
@property (nonatomic) BOOL isNewLayoutUI;
@property (copy, nonatomic) NSString *trackTabId;
@property (retain, nonatomic) AWEChallengeModel *challengeModel;
@property (retain, nonatomic) NSString *adLotteryRequirements;
@property (retain, nonatomic) NSString *missionID;
@property (nonatomic) BOOL isCommerceChallenge;
@property (readonly, copy, nonatomic) NSString *challengeId;
@property (readonly, copy, nonatomic) NSString *hashtagName;
@property (readonly, nonatomic, getter=isCommerce) BOOL commerce;
@property (copy, nonatomic) NSString *trackParams;

+ (id)viewModelWithChallengeID:(id)a0 hashtagName:(id)a1 authorID:(id)a2 isCommerce:(BOOL)a3 enterFrom:(id)a4;

- (void)fetchSectionData;
- (void)loadMoreSectionData;
- (void)setCommerceDataControllerVideoShowType:(unsigned long long)a0;
- (void)updateHashtagName:(id)a0;
- (void)updateSortType:(unsigned long long)a0;
- (id)recommendedAwemeCoversArrayForShare;
- (id)coverURLStringForShare;
- (void)trackFeedEnterAtIndex:(long long)a0 model:(id)a1;
- (void)trackFeedItemDidTappedAtIndex:(long long)a0 model:(id)a1;
- (void)trackFeedItemWillDisplayAtIndex:(long long)a0 model:(id)a1;
- (long long)modelIndexInHeaderWithModel:(id)a0;
- (long long)modelIndexInFeedWithModel:(id)a0;
- (void)appendModelFromDetailTableView:(id)a0;
- (id)multiColumnLogExtraDictionaryWithModel:(id)a0;
- (id)dataControllerAfterInsertingSlideList;
- (id)copiedDataController;
- (id)multiColumnLogExtraDictionary;
- (void).cxx_destruct;
- (BOOL)hasMoreData;

@end

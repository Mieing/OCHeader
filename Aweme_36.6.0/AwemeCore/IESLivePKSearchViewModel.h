@class IESLiveFixedFontTextSizeCache, NSString, RivalsSearchResponse_AnchorInfo, NSArray, HTSLivePKApi, RivalsSearchResponse_ResponseData, RivalsRecommendResponse_GroupRivals;

@interface IESLivePKSearchViewModel : NSObject <IESLivePKSearchAction, IESLivePKStateAction>

@property (retain, nonatomic) HTSLivePKApi *pkAPI;
@property (retain, nonatomic) RivalsSearchResponse_AnchorInfo *invitedAnchor;
@property (retain, nonatomic) IESLiveFixedFontTextSizeCache *tagSizeCache;
@property (retain, nonatomic) IESLiveFixedFontTextSizeCache *nameSizeCache;
@property (copy, nonatomic) NSString *toastString;
@property (copy, nonatomic) NSString *currentQuery;
@property (copy, nonatomic) NSString *searchSourceHistoryStr;
@property (nonatomic) long long currentOffset;
@property (nonatomic) BOOL isLoadingMore;
@property (nonatomic) long long searchScene;
@property (nonatomic) long long searchStatus;
@property (copy, nonatomic) NSArray *historyWords;
@property (copy, nonatomic) NSArray *suggestWords;
@property (retain, nonatomic) RivalsSearchResponse_ResponseData *searchResult;
@property (retain, nonatomic) RivalsRecommendResponse_GroupRivals *selectedRivals;
@property (retain, nonatomic) RivalsRecommendResponse_GroupRivals *hourlyRecommendRivals;
@property (retain, nonatomic) RivalsRecommendResponse_GroupRivals *popularityRecommendRivals;
@property (nonatomic) int selectedRecommendType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)didChangePKStateFrom:(long long)a0 to:(long long)a1;
- (void)resetInitialHistoryStatus;
- (void)cleanHistoryWord;
- (void)searchForSuggestWordsWith:(id)a0;
- (void)searchForResultWith:(id)a0 isLoadMore:(BOOL)a1;
- (void)deleteHistoryWord:(id)a0;
- (void)setInvitedSearchAnchor:(id)a0;
- (void)searchForRecommend;
- (void)migrateHistoryStorePerUserIfNeed;
- (void)preprocessSearchResultModel:(id)a0;
- (void)updateHistoryWords:(id)a0;
- (id)setupDefaultActivityText;
- (void).cxx_destruct;
- (void)setup;

@end

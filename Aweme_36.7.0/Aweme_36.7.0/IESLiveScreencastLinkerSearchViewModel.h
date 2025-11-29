@class NSString, NSArray, RivalsSearchResponse_ResponseData, IESLiveScreencastLinkerApi, NSMutableArray;

@interface IESLiveScreencastLinkerSearchViewModel : NSObject <IESLiveScreencastLinkerSearchAction>

@property (retain, nonatomic) IESLiveScreencastLinkerApi *api;
@property (nonatomic) long long currentOffset;
@property (nonatomic) BOOL isLoadingMore;
@property (retain, nonatomic) NSMutableArray *anchorIDArray;
@property (copy, nonatomic) NSString *currentQuery;
@property (copy, nonatomic) NSString *searchSourceHistoryStr;
@property (nonatomic) long long searchStatus;
@property (copy, nonatomic) NSArray *historyWords;
@property (copy, nonatomic) NSArray *suggestWords;
@property (retain, nonatomic) RivalsSearchResponse_ResponseData *searchResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)trackerWithEvent:(id)a0 extra:(id)a1;
- (void)onReceivedCancelInviteUser:(id)a0;
- (void)resetInitialHistoryStatus;
- (void)cleanHistoryWord;
- (void)searchForSuggestWordsWith:(id)a0;
- (void)searchForResultWith:(id)a0 isLoadMore:(BOOL)a1;
- (BOOL)shouldLimitFansCount:(long long)a0 userID:(id)a1;
- (void)inviteButtonDidClick:(id)a0;
- (void)p_preprocessSearchResultModel:(id)a0;
- (void)p_updateHistoryWords:(id)a0;
- (id)p_listUserWithAnchor:(id)a0;
- (void).cxx_destruct;

@end

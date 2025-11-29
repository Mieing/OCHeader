@class WCMktMemberCardHomePageCgi, NSString, WCMktDeleteTicketCgi, GetMemberCardHomePageResponse;
@protocol WCMktMemberCardHomeLogicControllerDelegate;

@interface WCMktMemberCardHomeLogicController : NSObject <WCMktMemberCardHomePageCgiDelegate, IWCCardPkgExt, WCNewCardDetailViewControllerDelegate, WCMktDeleteTicketCgiDelegate>

@property (weak, nonatomic) id<WCMktMemberCardHomeLogicControllerDelegate> delegate;
@property (retain, nonatomic) GetMemberCardHomePageResponse *memberCardHomePageResponse;
@property (nonatomic) BOOL bHasSendHomePageRequest;
@property (retain, nonatomic) WCMktMemberCardHomePageCgi *homePageCgi;
@property (retain, nonatomic) NSString *deletingCardID;
@property (retain, nonatomic) WCMktDeleteTicketCgi *deleteCardCgi;
@property (nonatomic) unsigned int svrRetChangeRule;
@property (nonatomic) BOOL bNeedRefreshHomePageAfterAppear;
@property (nonatomic) BOOL bHasHandleLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initLogicControllerWithDelegate:(id)a0;
- (void)setupData;
- (void)loadMemberCardHomePageCacheDataAndRefreshFromSvr;
- (void)saveHomePageDataToFile;
- (BOOL)isSvrReturnSortRule:(unsigned int)a0;
- (unsigned int)getSortRuleReqNum:(unsigned int)a0;
- (BOOL)isDenyLocationAccess;
- (BOOL)shouldShowSortTypeEntry;
- (unsigned int)getMemberCardSortRule;
- (void)removeMemberListDataWithUserCardId:(id)a0;
- (BOOL)isMemberCardAllLoad;
- (BOOL)hasMemberCardData;
- (long long)getTableViewRowCount;
- (id)getUserMemberCardSortInfo;
- (id)getSortListWording;
- (unsigned int)getSortRuleFromSortWording:(id)a0;
- (id)getMemberCardListData;
- (id)getMemberCardItemWithIndexPath:(id)a0;
- (id)bubblePhoneMemberCardEntryWording;
- (id)getRightButtonList;
- (void)handleRefreshHomePageAfterSelectSortRuleWording:(id)a0;
- (void)handleMemberCardCellClickWithIndexPath:(id)a0;
- (void)handleRemoveMemberCardCellWithIndexPath:(id)a0;
- (void)handleEnterHistoryEntry;
- (void)handleH5OpenWithUrl:(id)a0;
- (void)handleTinyAppOpenWithAppInfo:(id)a0;
- (void)changeSortruleAndRefreshHomePage;
- (void)handleEnterPhoneMemberCardEntry;
- (void)refreshHomePageFromSvrIfNecessaryAfterViewAppear;
- (void)handleClickRightBtnWithItemData:(id)a0;
- (void)getHomePageDataFromSvr;
- (void)refreshHomePageDataFromSvr;
- (void)handleHomePageDataLoadingMore;
- (void)getHomePageDataFromSvrWithOffset:(unsigned int)a0;
- (void)onRetrieveLocation:(int)a0;
- (void)onGetWCMktMemberCardPageCgiResp:(id)a0;
- (void)sendDeleteCardRequestWithUserCardId:(id)a0;
- (void)onGetDeleteTicketCgiResp:(id)a0;
- (void)onDeleteCard:(id)a0;
- (void)onDeleteCardIDList:(id)a0 ErrCode:(int)a1;
- (void)updateRecentListAfterCardDataChange;
- (void)onGiftCard:(id)a0 lastIndex:(id)a1;
- (void)onShareCard:(id)a0 lastIndex:(id)a1;
- (void)onUseCard:(id)a0;
- (void).cxx_destruct;

@end

@class NSString, NSMutableArray, WCFinderMemberShipHomePage;
@protocol WCFinderMemberShipHomePageViewModelDelegate;

@interface WCFinderMemberShipHomePageViewModel : NSObject <WCFinderPostDataItemExt, WCFinderDataItemExt, WCFinderMemberShipZoneTabModelProtocol>

@property (copy, nonatomic) NSString *finderMemberTicket;
@property (copy, nonatomic) NSString *finderUsername;
@property (nonatomic) BOOL isAuthor;
@property (retain, nonatomic) WCFinderMemberShipHomePage *currentPage;
@property (retain, nonatomic) NSMutableArray *displayPageModels;
@property (copy, nonatomic) NSString *redirectFeedID;
@property (weak, nonatomic) id<WCFinderMemberShipHomePageViewModelDelegate> delegate;
@property (nonatomic) unsigned long long unreadCount;
@property (nonatomic) unsigned long long totalCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFinderMemberTicket:(id)a0 finderUsername:(id)a1 isAuthor:(BOOL)a2 redirectFeedID:(id)a3;
- (id)tabName;
- (Class)tabControllerClass;
- (id)tabPageIdentifier;
- (unsigned long long)tabUnreadCount;
- (void)clearTabUnreadCount;
- (void)updateSelectedPage:(id)a0;
- (void)getLocalFirstPageData;
- (void)requestFirstPage;
- (id /* block */)createAuthorPostingFeedFetcher;
- (id /* block */)createPageCacheFetcher:(unsigned long long)a0;
- (BOOL)enableReceivePostDataItem:(id)a0;
- (void)onMemberShipQAPostSessionUpLoadFailWithTid:(id)a0 errorType:(long long)a1;
- (void)onMemberShipQAPostSessionUpLoadSuccessful:(id)a0;
- (void)onMemberShipQAPostSessionStartUpload:(id)a0;
- (void)insertOrUpdateDataItem:(id)a0 refTid:(id)a1;
- (void)insertOrUpdateDataItem:(id)a0 refTid:(id)a1 pageArray:(id)a2;
- (void)onFinderDataItemDelete:(id)a0;
- (void)deleteContentVM:(id)a0;
- (void)changeContentVM:(id)a0 stickyTopStatus:(BOOL)a1;
- (void)requestRemoteFirstPageData;
- (void).cxx_destruct;

@end

@class NSString, NSData, NSMutableSet, NSMutableArray, WCFinderMemberCollectionInfo;
@protocol WCFinderMemberShipFeedTabViewModelDelegate;

@interface WCFinderMemberShipFeedTabViewModel : NSObject <WCFinderPostDataItemExt, WCFinderDataItemExt, WCFinderMemberShipZoneTabModelProtocol>

@property (retain, nonatomic) NSMutableArray *contentVMS;
@property (copy, nonatomic) NSString *finderMemberTicket;
@property (copy, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) BOOL continueFlag;
@property (nonatomic) BOOL isAuthor;
@property (nonatomic) BOOL isFetchingData;
@property (retain, nonatomic) NSMutableSet *tidContainSet;
@property (weak, nonatomic) id<WCFinderMemberShipFeedTabViewModelDelegate> delegate;
@property (weak, nonatomic) id<WCFinderMemberShipFeedTabViewModelDelegate> detailDelegate;
@property (nonatomic) unsigned long long unreadCount;
@property (nonatomic) unsigned long long totalCount;
@property (retain, nonatomic) WCFinderMemberCollectionInfo *memberCollectionInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFinderMemberTicket:(id)a0 finderUsername:(id)a1 isAuthor:(BOOL)a2 initializeDataItems:(id)a3;
- (id)tabName;
- (Class)tabControllerClass;
- (id)tabPageIdentifier;
- (unsigned long long)tabUnreadCount;
- (void)clearTabUnreadCount;
- (void)updateState;
- (void)getLocalFirstPageData;
- (void)requestFirstPage;
- (void)requestFirstPageData;
- (void)requestNextPageData;
- (long long)indexOfTid:(id)a0;
- (id)contentVMAtDataIndex:(unsigned long long)a0;
- (id)contentVMWithTid:(id)a0;
- (void)requestDataWithPullType:(unsigned long long)a0;
- (void)setupInitilizeDataItems:(id)a0;
- (void)onGetDataArray:(id)a0 pullFromTop:(BOOL)a1 lastBuff:(id)a2 continueFlag:(BOOL)a3;
- (BOOL)enableReceivePostDataItem:(id)a0;
- (void)onMemberShipFeedPostSessionUpLoadFailWithTid:(id)a0 errorType:(long long)a1;
- (void)onMemberShipFeedPostSessionUpLoadSuccessful:(id)a0;
- (void)onMemberShipFeedPostSessionStartUpload:(id)a0;
- (void)insertPostDataItem:(id)a0 insertIndex:(long long)a1;
- (void)onFinderDataItemDelete:(id)a0;
- (void)deleteContentVM:(id)a0;
- (void)changeContentVM:(id)a0 stickyTopStatus:(BOOL)a1;
- (void).cxx_destruct;

@end

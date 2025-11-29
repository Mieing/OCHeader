@class NSString, NSData, NSMutableSet, NSMutableArray;
@protocol WCFinderMemberShipDraftViewModelDelegate;

@interface WCFinderMemberShipDraftViewModel : NSObject <WCFinderFeedDraftExt, WCFinderMemberShipZoneTabModelProtocol>

@property (retain, nonatomic) NSMutableArray *contentVMS;
@property (copy, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) BOOL continueFlag;
@property (nonatomic) BOOL isFetchingData;
@property (retain, nonatomic) NSMutableSet *tidContainSet;
@property (weak, nonatomic) id<WCFinderMemberShipDraftViewModelDelegate> delegate;
@property (nonatomic) unsigned long long unreadCount;
@property (nonatomic) unsigned long long totalCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFinderUsername:(id)a0;
- (id)tabName;
- (Class)tabControllerClass;
- (id)tabPageIdentifier;
- (unsigned long long)tabUnreadCount;
- (void)clearTabUnreadCount;
- (void)requestFirstPage;
- (void)getLocalFirstPageData;
- (void)requestFirstPageData;
- (void)requestNextPageData;
- (void)updateState;
- (void)requestDataWithPullType:(unsigned long long)a0;
- (void)onGetDataArray:(id)a0 pullFromTop:(BOOL)a1 lastBuff:(id)a2 continueFlag:(BOOL)a3;
- (long long)indexOfDraftId:(id)a0;
- (id)draftVMItemWithDraftId:(id)a0;
- (id)draftVMAtDataIndex:(unsigned long long)a0;
- (void)deleteItem:(id)a0 callback:(id /* block */)a1;
- (void)retryItem:(id)a0;
- (void)onMembershipFeedDraftDeleted:(id)a0;
- (id)createDraftVM:(id)a0;
- (void)onMembershipFeedDraftAdded:(id)a0;
- (void).cxx_destruct;

@end

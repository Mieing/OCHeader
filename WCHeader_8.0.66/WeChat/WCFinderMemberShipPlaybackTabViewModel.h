@class NSString, NSData, NSMutableSet, NSMutableArray;
@protocol WCFinderMemberShipPlaybackTabViewModelDelegate;

@interface WCFinderMemberShipPlaybackTabViewModel : NSObject <WCFinderMemberShipZoneTabModelProtocol>

@property (retain, nonatomic) NSMutableArray *contentVMS;
@property (copy, nonatomic) NSString *finderMemberTicket;
@property (copy, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) BOOL continueFlag;
@property (nonatomic) BOOL isAuthor;
@property (nonatomic) BOOL isFetchingData;
@property (retain, nonatomic) NSMutableSet *tidContainSet;
@property (weak, nonatomic) id<WCFinderMemberShipPlaybackTabViewModelDelegate> delegate;
@property (weak, nonatomic) id<WCFinderMemberShipPlaybackTabViewModelDelegate> detailDelegate;
@property (nonatomic) unsigned long long unreadCount;
@property (nonatomic) unsigned long long totalCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFinderMemberTicket:(id)a0 finderUsername:(id)a1 isAuthor:(BOOL)a2;
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
- (void)onStartPreload:(id)a0;
- (void)onGetDataArray:(id)a0 pullFromTop:(BOOL)a1 lastBuff:(id)a2 continueFlag:(BOOL)a3;
- (void)deleteContentVM:(id)a0;
- (void)onFinderDataItemDelete:(id)a0;
- (void).cxx_destruct;

@end

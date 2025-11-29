@class NSString, NSMutableDictionary, AWEShakeShareAwemeReceiveSharingPanel, NSMutableSet, AWEAwemeModel, NSMutableArray, NSObject;
@protocol AWEUserLikesDataManagerProtocol;

@interface AWEShakeShareAwemeManager : NSObject <DUXSheetDelegate>

@property (retain, nonatomic) NSObject<AWEUserLikesDataManagerProtocol> *likeDataManager;
@property (retain, nonatomic) NSMutableArray *itemList;
@property (retain, nonatomic) NSMutableDictionary *sentShareIdMap;
@property (nonatomic) BOOL requestingShare;
@property (retain, nonatomic) NSMutableArray *shareInbox;
@property (retain, nonatomic) NSMutableSet *proceedShareIds;
@property (retain, nonatomic) AWEShakeShareAwemeReceiveSharingPanel *receivePanel;
@property (nonatomic) BOOL replyingShare;
@property (retain, nonatomic) AWEAwemeModel *awemeToShare;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)sheetWillStayAfterClickMaskArea;
- (void)sheetDidDismiss:(id)a0;
- (void)onApplicationWillResignActive;
- (void)updateWithNearbyItemList:(id)a0;
- (void)updateWithShareInbox:(id)a0;
- (void)updateShareModelIfNeededWithCurrentUser:(id)a0 newUser:(id)a1;
- (void)trackShareSuccessForRadarUser:(id)a0;
- (id)fetchRadarItemWithShareModelForUser:(id)a0;
- (void)showReceiveSharePanelIfNeeded;
- (void)dismissReceiveSharePanelIfNeeded;
- (void)replyShareWithShareId:(id)a0 accept:(BOOL)a1;
- (void)transToMessageVCIfNeedRetry:(id)a0 retryCount:(long long)a1;
- (void)fetchAwemeWithCurrentAweme:(id)a0 completion:(id /* block */)a1;
- (void)updateWithNearbyItemList:(id)a0 shareInbox:(id)a1 completion:(id /* block */)a2;
- (unsigned long long)shareCardStatusForUser:(id)a0;
- (void)startShareAweme:(id)a0 toUser:(id)a1 completion:(id /* block */)a2;
- (void)cancelShareAweme:(id)a0 toUser:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end

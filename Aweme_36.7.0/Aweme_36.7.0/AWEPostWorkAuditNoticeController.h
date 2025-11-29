@class NSString, NSMutableSet;

@interface AWEPostWorkAuditNoticeController : AWEPostWorkBaseController <AWEPostWorkAuditNoticeProtocol, AWEUserWorkCoverTrackerControllerProtocol>

@property (retain, nonatomic) NSMutableSet *clientShowAuditItemIds;
@property (retain, nonatomic) NSMutableSet *trackedAuditBarItemID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerCollectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)trackAuditShowIfNeed;
- (void)onApplicationWillTerminateNotification:(id)a0;
- (id)checkAuditNoticeValid:(id)a0;
- (void)cellDidDisplay:(id)a0 indexPath:(id)a1 extraParams:(id)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (void)containerViewDidLoad;

@end

@class NSString;

@interface AWEMVCardShowRecordController : AWEDCFeedBaseController <AWEMVEventDispatchProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerCollectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)mvPageContext;
- (void)saveDataToStorage;
- (void)saveLatestPlayProgress;
- (void)saveLastShowIds;
- (void)didLeaveMVChannel;
- (void)applicationWillResignActive;
- (void)applicationWillTerminate;

@end

@class MMFinderLiveShopShelfCoordinator, FinderBulkBuyInfo, NSString, MMFinderLiveTaskId;

@interface MMFinderLiveShopShelfBulkBuyViewModel : NSObject <MMFinderLiveShopShelfItemViewModelProtocol, MMFinderLiveShopShelfManagedItemViewModelProtocol>

@property (retain, nonatomic) FinderBulkBuyInfo *data;
@property (retain, nonatomic) MMFinderLiveTaskId *taskID;
@property (weak, nonatomic) MMFinderLiveShopShelfCoordinator *shopShelfCoordinator;
@property (readonly, nonatomic) BOOL needReplayButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isPromoting;
- (void)setIsPromoting:(BOOL)a0;
- (id)productReplayInfo;
- (id)idUnit;
- (void).cxx_destruct;

@end

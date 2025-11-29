@class MMFinderLiveRewardFreeGift, FinderLiveFreeGiftPackageInfo, NSMutableSet, NSMutableArray;

@interface MMFinderLiveRewardFreeGiftManager : NSObject

@property (retain, nonatomic) NSMutableSet *usedFreeGiftIdSet;
@property (retain, nonatomic) NSMutableArray *freeGiftArray;
@property (retain, nonatomic) MMFinderLiveRewardFreeGift *latestLocalInsertFreeGift;
@property (retain, nonatomic) FinderLiveFreeGiftPackageInfo *latestFreeGiftPackageInfo;

- (id)init;
- (void)syncServerFreeGiftPackageInfo:(id)a0;
- (void)insertFreeGiftIfNeeded:(id)a0;
- (void)markFreeGiftDidSent:(id)a0 count:(unsigned long long)a1;
- (void)unmarkFreeGiftDidSent:(id)a0 giftIds:(id)a1;
- (id)getNextSendableFreeGift;
- (id)createRewardItemFromFreeGift:(id)a0;
- (id)createBatchInfoFromFreeGift:(id)a0;
- (id)handleFreeGiftWithCurrentPackageItems:(id)a0;
- (BOOL)isFreeGiftAlreadyUsed:(id)a0;
- (void)rebuildFreeGiftArray;
- (void)insertLocalReceivedFreeGiftArrayIfNeeded;
- (void).cxx_destruct;

@end

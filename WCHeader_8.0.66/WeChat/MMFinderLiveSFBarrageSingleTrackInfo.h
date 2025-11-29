@class NSMutableArray, MMFinderLiveSFBarrageItemInfo;

@interface MMFinderLiveSFBarrageSingleTrackInfo : NSObject

@property (nonatomic) BOOL unValid;
@property (nonatomic) BOOL isAvailable;
@property (readonly, nonatomic) BOOL canUsed;
@property (nonatomic) double positionY;
@property (nonatomic) double positionYPercent;
@property (readonly, nonatomic) MMFinderLiveSFBarrageItemInfo *lastBarrageItemInfo;
@property (readonly, nonatomic) MMFinderLiveSFBarrageItemInfo *lastMovingBarrageItemInfo;
@property (retain, nonatomic) NSMutableArray *currVisibleBarrageItemList;
@property (copy, nonatomic) id /* block */ hasBarrageMovingCallback;

- (void)addBarrageItem:(id)a0;
- (void)removeBarrageItem:(id)a0;
- (void).cxx_destruct;

@end

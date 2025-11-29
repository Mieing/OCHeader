@class WCFinderRedDotTipsShowInfo;
@protocol WCFinderPersonalCenterCellProtocol;

@interface WCFinderPersonalCenterItem : NSObject

@property (retain, nonatomic) Class cellClass;
@property (copy, nonatomic) id /* block */ setupBlock;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (weak, nonatomic) id<WCFinderPersonalCenterCellProtocol> weakCell;
@property (nonatomic) long long tag;
@property (retain, nonatomic) WCFinderRedDotTipsShowInfo *redDotInfo;

+ (id)itemWithCellClass:(Class)a0 clickBlock:(id /* block */)a1 setupBlock:(id /* block */)a2;
+ (id)buttonItemWithTitle:(id)a0 clickBlock:(id /* block */)a1;

- (double)displayCellHeight;
- (id)dequeueCellFromCollectionView:(id)a0 indexPath:(id)a1;
- (void)handleClickFromVC:(id)a0;
- (void)updateCellRedDotInfo;
- (void).cxx_destruct;

@end

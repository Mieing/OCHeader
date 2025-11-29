@class NSString;

@interface BTFixedFinderCellViewModel : BTBaseRecommendAppMsgCellViewModel

@property (copy, nonatomic) NSString *curRecommendReason;

+ (BOOL)canCreateViewModelWithSectionData:(id)a0 accountIndex:(unsigned int)a1 appMsgIndex:(unsigned int)a2;

- (id)itemViewClassName;
- (void)updateWithSectionData:(id)a0 msgWrap:(id)a1 itemIndex:(unsigned int)a2 accountIndex:(unsigned int)a3 appMsgIndex:(unsigned int)a4 viewWidth:(double)a5;
- (void)resetCacheData;
- (id)finderItemViewModelArr;
- (BOOL)hasOnlyOneVisibleItem;
- (long long)finderItemViewModelArrVisibleCount;
- (void)doCellViewDeleteAnimationWithItemIndex:(long long)a0;
- (double)viewHeight;
- (id)finderDataWrapper;
- (id)buildFinderModelWithFinderData:(id)a0;
- (void).cxx_destruct;

@end

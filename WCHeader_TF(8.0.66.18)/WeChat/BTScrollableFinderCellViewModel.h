@class NSArray, WCFinderMPInterestData, NSString, NSMutableArray;
@protocol BTScrollableFinderCellViewModelDelegate;

@interface BTScrollableFinderCellViewModel : BTBaseRecommendAppMsgCellViewModel <WCFinderMPInterestDataExt> {
    NSMutableArray *_finderItemViewModelArr;
    NSMutableArray *_finderItemViewModelArrForDisplay;
}

@property (nonatomic) BOOL hasRequestFinderInterestData;
@property (retain, nonatomic) WCFinderMPInterestData *finderInterestData;
@property (weak, nonatomic) id<BTScrollableFinderCellViewModelDelegate> delegate;
@property (retain, nonatomic) NSArray *indexesOfExposedItemNeedToReport;
@property (nonatomic) BOOL hasUpdateDatas;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateViewModelWithSectionData:(id)a0 accountIndex:(unsigned int)a1 appMsgIndex:(unsigned int)a2;
+ (double)cellWidth;
+ (double)cellHeight;

- (id)itemViewClassName;
- (void)updateWithSectionData:(id)a0 msgWrap:(id)a1 itemIndex:(unsigned int)a2 accountIndex:(unsigned int)a3 appMsgIndex:(unsigned int)a4 viewWidth:(double)a5;
- (BOOL)isDataChanged;
- (void)resetData;
- (BOOL)enableFinderInterestCard;
- (BOOL)hasFinderInteresetData;
- (void)requestFinderInterestCardIfNeeded;
- (BOOL)isFinderInterestDataWithIndex:(long long)a0;
- (unsigned long long)itemCount;
- (id)finderItemViewModelArr;
- (id)finderItemViewModelArrForDisplay;
- (id)title;
- (long long)getDataIndexFromDisplayIndex:(long long)a0;
- (long long)getDisplayIndexFromDataIndex:(long long)a0;
- (void)clearFinderItemViewModelArrCache;
- (void)doCellViewDeleteAnimationWithItemIndexArr:(id)a0;
- (double)viewHeight;
- (id)finderDataWrapper;
- (void)stopAllAutoPlayCell;
- (void)onDisappear;
- (void)onFinderMPInterestDataDidDelete:(id)a0;
- (void).cxx_destruct;

@end

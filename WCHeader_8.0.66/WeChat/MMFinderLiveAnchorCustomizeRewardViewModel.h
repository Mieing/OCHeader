@class MMFinderLiveFansGroupAnchorEditViewModel, NSArray, MMFinderLiveTaskId, NSMutableArray;
@protocol MMFinderLiveAnchorCustomizeRewardViewModelDelegate;

@interface MMFinderLiveAnchorCustomizeRewardViewModel : UIView

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property BOOL isFansGroupDataAvailable;
@property BOOL isAnchorCustomizeDataAvailable;
@property (retain, nonatomic) MMFinderLiveFansGroupAnchorEditViewModel *fansGroupCustomizeRewardViewModel;
@property (retain, nonatomic) NSMutableArray *anchorCustomizeRewardItemMutableArray;
@property (weak, nonatomic) id<MMFinderLiveAnchorCustomizeRewardViewModelDelegate> delegate;
@property (readonly, nonatomic) BOOL isDataAvailable;
@property (readonly, nonatomic) NSArray *fansGroupCustomizeRewardItemArray;
@property (readonly, nonatomic) NSArray *anchorCustomizeRewardItemArray;

- (id)initWithTaskId:(id)a0;
- (void)startFetchingCustomizeRewardData;
- (void).cxx_destruct;

@end

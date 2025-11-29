@class NSArray, NSString, IESEffectModel, AWEColorFilterDataManager;

@interface AWECameraFilterConfiguration : NSObject

@property (copy, nonatomic) NSArray *filterArray;
@property (copy, nonatomic) NSArray *aggregatedEffects;
@property (readonly, nonatomic) AWEColorFilterDataManager *filterManager;
@property (retain, nonatomic) IESEffectModel *frontCameraFilter;
@property (retain, nonatomic) IESEffectModel *rearCameraFilter;
@property (retain, nonatomic) IESEffectModel *needRecoveryFrontCameraFilter;
@property (retain, nonatomic) IESEffectModel *needRecoveryRearCameraFilter;
@property (copy, nonatomic) NSString *emptyFilterItemName;

- (id)initWithFilterPanelName:(id)a0;
- (void)updateCameraFilterWithEffects:(id)a0;
- (void)fetchEffectListStateCompletion:(id /* block */)a0;
- (void)updateFilterData;
- (void)updateFilterDataWithCompletion:(id /* block */)a0;
- (void)updateFilterCheckStatusWithCheckArray:(id)a0 uncheckArray:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end

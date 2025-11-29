@class NSMutableDictionary, IESECShopInnerFlowContext;

@interface IESECShopInnerFlowSliceSectionViewModel : NSObject

@property (retain, nonatomic) IESECShopInnerFlowContext *context;
@property (retain, nonatomic) NSMutableDictionary *exposurePercentCache;
@property (retain, nonatomic) NSMutableDictionary *itemStatesCache;

- (Class)cellClassAtIndex:(long long)a0;
- (void)configCell:(id)a0 index:(long long)a1 itemModel:(id)a2;
- (void)updateExposurePercent:(double)a0 index:(long long)a1;
- (void)updateItemStates:(id)a0 atIndex:(long long)a1;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end

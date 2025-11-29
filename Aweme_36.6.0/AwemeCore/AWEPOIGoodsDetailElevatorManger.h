@class DitoComponentViewModel, NSMutableArray, NSMutableDictionary;
@protocol AWEPOIGoodsDetailElevatorMangerDelegate;

@interface AWEPOIGoodsDetailElevatorManger : NSObject

@property (retain, nonatomic) NSMutableArray *titleKeyArray;
@property (retain, nonatomic) NSMutableDictionary *titleKeyDictionary;
@property (nonatomic) BOOL isFloat;
@property (weak, nonatomic) DitoComponentViewModel *navigationBarViewModel;
@property (weak, nonatomic) id<AWEPOIGoodsDetailElevatorMangerDelegate> delegate;

- (void)updateWithTitleTabs:(id)a0 viewModel:(id)a1 isFloat:(BOOL)a2;
- (void)pageViewDidScrollWithOffsetYValue:(id)a0 fromForceUpdate:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;

@end

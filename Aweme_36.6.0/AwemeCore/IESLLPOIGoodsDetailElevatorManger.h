@class LLDitoComponentViewModel, NSMutableArray, NSMutableDictionary;
@protocol IESLLPOIGoodsDetailElevatorMangerDelegate;

@interface IESLLPOIGoodsDetailElevatorManger : NSObject

@property (retain, nonatomic) NSMutableArray *titleKeyArray;
@property (retain, nonatomic) NSMutableDictionary *titleKeyDictionary;
@property (nonatomic) BOOL isFloat;
@property (weak, nonatomic) LLDitoComponentViewModel *navigationBarViewModel;
@property (weak, nonatomic) id<IESLLPOIGoodsDetailElevatorMangerDelegate> delegate;

- (void)updateWithTitleTabs:(id)a0 viewModel:(id)a1 isFloat:(BOOL)a2;
- (void)pageViewDidScrollWithOffsetYValue:(id)a0 fromForceUpdate:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;

@end

@class IESECShopInnerFlowContext, NSString, NSDictionary, IESECShopInnerFlowSliceCardController, UIView, NSMutableDictionary, IESECServiceProxy;
@protocol IESECShopSLIService, IESECShopInnerFlowSliceCardDelegate;

@interface IESECShopInnerFlowSliceCard : UICollectionViewCell <IESECShopInnerFlowSliceCardDelegate>

@property (retain, nonatomic) IESECShopInnerFlowSliceCardController *cardController;
@property (retain, nonatomic) UIView *sliceXContainerView;
@property (retain, nonatomic) NSDictionary *sliceData;
@property (retain, nonatomic) NSString *uniqueId;
@property (nonatomic) long long index;
@property (retain, nonatomic) NSMutableDictionary *itemStates;
@property (retain, nonatomic) IESECServiceProxy<IESECShopSLIService> *SLIService;
@property (retain, nonatomic) IESECShopInnerFlowContext *context;
@property (weak, nonatomic) id<IESECShopInnerFlowSliceCardDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sliceItemState:(id)a0 didChange:(id)a1;
- (void)updateExposurePercent:(double)a0 index:(long long)a1;
- (void)updateItemStates:(id)a0 atIndex:(long long)a1;
- (void)sliceXContentView:(id)a0 index:(long long)a1 didUpdateViewSize:(struct CGSize { double x0; double x1; })a2;
- (void)configItemStates:(id)a0;
- (void)configWithItemModel:(id)a0 index:(long long)a1 exposurePercent:(id)a2;
- (void)updateExposurePercent:(double)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;

@end

@class IESECLiveComboBuyView, NSString;

@interface IESECLivePromotionCardBottomModule : IESECLivePromotionCardCommonModule <IESECLiveComboBuyViewDelegate, IESECLivePromotionCardCommonModuleBottomUpdateProvider>

@property (retain, nonatomic) IESECLiveComboBuyView *combinationView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)calculateHeightWithGoodsModel:(id)a0;

- (void)trackShowEvent;
- (void)didClickComboBuyView:(id)a0 cellBottomType:(unsigned long long)a1 extraInfo:(id)a2;
- (id)protocolToInject;
- (void)updateWithGoodsViewModel:(id)a0;
- (void)updatBottomModuleCornerRadius:(double)a0;
- (void).cxx_destruct;
- (id)view;
- (void)setupAccessibility;

@end

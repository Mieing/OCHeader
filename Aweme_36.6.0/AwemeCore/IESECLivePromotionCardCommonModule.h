@class IESECLivePromotionCardUIConfigStore, IESECLivePromotionCardBusinessParams, UIView, IESECLivePromotionCardConfigModel, IESECLiveGoodsViewModel, NSString, IESECLiveTracker, IESECLiveContext;
@protocol IESECLivePromotionCardCommonModuleContainer;

@interface IESECLivePromotionCardCommonModule : NSObject <IESECLigoComponentProtocol>

@property (retain, nonatomic) IESECLivePromotionCardConfigModel *configModel;
@property (retain, nonatomic) IESECLivePromotionCardBusinessParams *bizParams;
@property (weak, nonatomic) IESECLiveGoodsViewModel *goodsViewModel;
@property (retain, nonatomic) IESECLiveContext *liveContext;
@property (readonly, nonatomic) IESECLiveTracker *tracker;
@property (weak, nonatomic) UIView<IESECLivePromotionCardCommonModuleContainer> *moduleContainer;
@property (readonly, nonatomic) IESECLivePromotionCardUIConfigStore *uiConfigStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)calculateHeightWithGoodsModel:(id)a0;

- (void)trackShowEvent;
- (void)trackEvent:(id)a0 params:(id)a1 btmModel:(id)a2;
- (BOOL)enableReuseComponent;
- (void)updateWithGoodsViewModel:(id)a0;
- (id)btmModelForInfo:(id)a0;
- (void)trackProductClickWithParams:(id)a0 btmModel:(id)a1 extraInfo:(id)a2;
- (BOOL)prepareClick;
- (id)p_updateSearchParams:(id)a0;
- (void)updateComponentWithModel:(id)a0 ligoContext:(id)a1;
- (void).cxx_destruct;
- (void)setupAccessibility;

@end

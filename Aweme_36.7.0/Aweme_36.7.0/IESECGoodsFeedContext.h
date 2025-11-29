@class NSMutableArray, NSString, IESECGoodsDetailParameters, UIView, IESECGoodsDetailTracker, IESECGoodsFeedQualityTracker;
@protocol IESECGoodsFeedContainerProtocol;

@interface IESECGoodsFeedContext : IESECContext <IESECDIContext>

@property (weak, nonatomic) id<IESECGoodsFeedContainerProtocol> container;
@property (retain, nonatomic) IESECGoodsDetailParameters *globalParameters;
@property (weak, nonatomic) UIView *rootView;
@property (retain, nonatomic) IESECGoodsDetailTracker *tracker;
@property (retain, nonatomic) IESECGoodsFeedQualityTracker *qualityTracker;
@property (nonatomic) long long maximumDisplayDepth;
@property (nonatomic) long long goodsCardCount;
@property (retain, nonatomic) NSMutableArray *productsHaveBeenDisplayed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithParams:(id)a0 targetVC:(id)a1 rootView:(id)a2;
- (void)updateGlobalParams:(id)a0;
- (void).cxx_destruct;

@end

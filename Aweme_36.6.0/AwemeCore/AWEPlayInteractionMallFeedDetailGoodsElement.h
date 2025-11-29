@class NSString, UIView;
@protocol AWEMallFeedDetailGoodsElementProtocol;

@interface AWEPlayInteractionMallFeedDetailGoodsElement : AWEPlayInteractionLeftElement <AWEElementSelfFilterProtocol>

@property (retain, nonatomic) UIView *goodsCardContainer;
@property (retain, nonatomic) UIView<AWEMallFeedDetailGoodsElementProtocol> *goodsCard;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateInfoWithContext:(id)a0;

- (void)viewController_willDisplay;
- (void)viewController_viewDidAppear;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (id)getTrackParamsFromModel;
- (void)requesetImpression;
- (void).cxx_destruct;
- (void)setData:(id)a0;

@end

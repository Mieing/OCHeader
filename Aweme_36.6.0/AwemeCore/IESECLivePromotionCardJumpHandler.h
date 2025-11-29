@class IESECLivePromotionCardConfigModel, IESECLivePromotionCardTracker, IESECLivePromotionCardBusinessParams, IESECLiveContext, CALayer, UIView;
@protocol IESECLivePromotionCardBusinessDelegate, IESECLivePromotionCardViewProtocol;

@interface IESECLivePromotionCardJumpHandler : NSObject

@property (retain, nonatomic) UIView<IESECLivePromotionCardViewProtocol> *cardView;
@property (retain, nonatomic) CALayer *cartAddanimationLayer;
@property (weak, nonatomic) id<IESECLivePromotionCardBusinessDelegate> delegate;
@property (retain, nonatomic) IESECLivePromotionCardBusinessParams *bizParams;
@property (retain, nonatomic) IESECLivePromotionCardTracker *promotionCardTracker;
@property (retain, nonatomic) IESECLivePromotionCardConfigModel *cardConfigModel;
@property (retain, nonatomic) IESECLiveContext *liveContext;

- (id)panelContainer;
- (id)businessContext;
- (id)coreParams;
- (struct CGSize { double x0; double x1; })maskSize;
- (id)initWithLiveContext:(id)a0;
- (id)jumpHandler;
- (id)panelEnvironment;
- (struct CGSize { double x0; double x1; })panelSize;
- (id)getSkuFrom;
- (void)p_noticeBuyIntension;
- (void)clickWithPromotionCardView:(id)a0 event:(id)a1;
- (void)p_setSearchBCMPageParams;
- (id)p_ecomEntranceForm;
- (id)addCartInfo:(id)a0;
- (id)subCartInfo:(id)a0;
- (id)skuCreateInfoWithGoodsModel:(id)a0 sourceBTMToken:(id)a1;
- (id)tracker;
- (void).cxx_destruct;
- (id)roomContext;

@end

@class IESECLivePromotionCardViewV1, IESECLiveContext, IESECLivePromotionCardBusinessParams, IESECLivePromotionCardBTMModel;
@protocol IESECLivePromotionCardBusinessDelegate;

@interface IESECLivePromotionCardTracker : NSObject

@property (retain, nonatomic) IESECLiveContext *liveContext;
@property (retain, nonatomic) IESECLivePromotionCardBTMModel *BTMInfo;
@property (retain, nonatomic) IESECLivePromotionCardViewV1 *cardView;
@property (retain, nonatomic) IESECLivePromotionCardBusinessParams *bizParams;
@property (weak, nonatomic) id<IESECLivePromotionCardBusinessDelegate> delegate;
@property (nonatomic) long long cardScene;

- (void)trackShowEvent;
- (id)p_basicTrackParams;
- (void)trackEvent:(id)a0 params:(id)a1 goodsModel:(id)a2 btmModel:(id)a3;
- (id)goodsViewModel;
- (void)trackIntroduceCellShowWithUniqueKey:(id)a0;
- (id)p_goodsModelWithOrientationStatus:(id)a0;
- (void)trackShowEventWithAreaType:(long long)a0 extraInfo:(id)a1;
- (id)getBTMModelWithAreaType:(long long)a0;
- (void)trackButtonClickEventWithExtraInfo:(id)a0;
- (id)initWithLiveContext:(id)a0 cardView:(id)a1 BTMInfo:(id)a2;
- (void)p_noticeBuyIntension;
- (void)trackProductClickWithParams:(id)a0 goodsViewModel:(id)a1 btmModel:(id)a2 extraInfo:(id)a3 view:(id)a4;
- (id)p_ecomEntranceForm;
- (void)trackProductTagShowIfNeededWithCardView:(id)a0;
- (id)productTagTrackParamsForGoodsTrackWithCardView:(id)a0;
- (id)p_actRecordManager;
- (void)trackBSTShowEvent:(id)a0 params:(id)a1 goodsModel:(id)a2 view:(id)a3;
- (id)tracker;
- (void).cxx_destruct;

@end

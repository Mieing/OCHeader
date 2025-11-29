@class NSString, IESECLiveContext;
@protocol IESECLivePromotionCardBusinessParamsDelegate;

@interface IESECLivePromotionCardBusinessParams : NSObject <IESECLivePromotionCardBusinessParamsDelegate>

@property (retain, nonatomic) IESECLiveContext *liveContext;
@property (weak, nonatomic) id<IESECLivePromotionCardBusinessParamsDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)searchParams;
- (id)localPage;
- (long long)checkSourcePage;
- (id)getBasicTrackParams;
- (id)initWithLiveContext:(id)a0;
- (id)promotionCardEcomEntranceForm;
- (id)promotionCardPanelSize;
- (id)getGoodsListOpenParams;
- (id)getHourBuyShopID;
- (id)getGoodsListLogID;
- (id)getPassthroughTrackDic;
- (BOOL)currentLandscape;
- (id)skuMaskBgColor;
- (id)getSkuFrom;
- (id)promotionCardLiveListChannel;
- (id)getStoreTrack;
- (long long)getBusinessEnvironmentType;
- (void).cxx_destruct;

@end

@class NSString, NSAttributedString, AWEECOMIMEntryChatInfoModel;
@protocol AWEECOMIMSubCardTrackProtocol;

@interface AWEECOMIMProductItemModel : NSObject <AWEECOMIMSubCardProductCardDiscountProtocol>

@property (copy, nonatomic) NSString *goodImg;
@property (copy, nonatomic) NSString *goodTitle;
@property (copy, nonatomic) NSString *currentPrice;
@property (copy, nonatomic) NSString *originalPrice;
@property (copy, nonatomic) NSString *productUrl;
@property (copy, nonatomic) NSString *productId;
@property (retain, nonatomic) AWEECOMIMEntryChatInfoModel *entryModel;
@property (copy, nonatomic) NSAttributedString *deleteLineOriginPrice;
@property (weak, nonatomic) id<AWEECOMIMSubCardTrackProtocol> tracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackTapEvent;
- (id)messageBcmUnitParams;
- (void)trackSubCardTap:(id)a0 extraParams:(id)a1 unitBtmId:(id)a2 responder:(id)a3 needSetBcm:(BOOL)a4;
- (void)skipToUrl:(id)a0 andTrackSubcardTap:(id)a1 extraParams:(id)a2 unitBtmId:(id)a3 responder:(id)a4 needSetBcm:(BOOL)a5;
- (void)skipToUrl:(id)a0 andTrackSubCardTap:(id)a1 extraParams:(id)a2;
- (void)trackSubCardTapWithSubCardName:(id)a0 extraParams:(id)a1;
- (void)skipToUrlAndTrackTapWithSkipUrl:(id)a0;
- (void).cxx_destruct;

@end

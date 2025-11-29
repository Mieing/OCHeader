@class NSString, NSNumber;

@interface IESECLiveGoodsCheckRequest : IESECLiveAPIBaseRequest

@property (copy, nonatomic) NSString *promotionID;
@property (copy, nonatomic) NSString *productID;
@property (copy, nonatomic) NSNumber *status;
@property (copy, nonatomic) NSString *entranceInfo;
@property (nonatomic) long long clickEnterFrom;
@property (nonatomic) long long comboNum;
@property (copy, nonatomic) NSNumber *livePanelHeightPercent;
@property (copy, nonatomic) NSNumber *orderMaskAlpha;
@property (copy, nonatomic) NSString *containerRoomID;
@property (copy, nonatomic) NSString *storeID;
@property (copy, nonatomic) NSString *addressInfo;
@property (nonatomic) long long interactionType;
@property (nonatomic) BOOL usePromotionV2;
@property (retain, nonatomic) NSNumber *usePopCardV2;
@property (retain, nonatomic) NSNumber *enableSchemaOpt;
@property (nonatomic) long long sourcePage;
@property (copy, nonatomic) NSString *checkCallback;

- (id)buildParams;
- (void).cxx_destruct;

@end

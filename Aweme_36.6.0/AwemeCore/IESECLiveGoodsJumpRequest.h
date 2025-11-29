@class NSString, IESECLiveAddCartInfo, IESECLiveGoodsBaseModel, IESECBTMModel, NSDictionary, IESECLiveActionModel, IESECLiveSubCartInfo, IESECLiveSKUCreateInfo;

@interface IESECLiveGoodsJumpRequest : IESECLiveBaseJumpRequest

@property (retain, nonatomic) NSString *ecomEntranceForm;
@property (retain, nonatomic) IESECLiveGoodsBaseModel *goodsModel;
@property (nonatomic) long long clickStyle;
@property (retain, nonatomic) IESECBTMModel *btmModel;
@property (retain, nonatomic) IESECLiveAddCartInfo *addCartInfo;
@property (retain, nonatomic) IESECLiveSubCartInfo *subCartInfo;
@property (retain, nonatomic) IESECLiveSKUCreateInfo *skuCreateInfo;
@property (retain, nonatomic) IESECLiveActionModel *action;
@property (retain, nonatomic) NSDictionary *entranceInfoAddition;
@property (retain, nonatomic) NSDictionary *additionalEntranceInfos;
@property (retain, nonatomic) NSDictionary *basicTrackParams;
@property (nonatomic) long long clickEnterForm;
@property (copy, nonatomic) id /* block */ didJumpBlock;
@property (nonatomic) long long sourcePage;
@property (copy, nonatomic) NSString *ultimateOrderSchemaForDiff;
@property (copy, nonatomic) NSString *normalOrderSchemaForDiff;

- (void).cxx_destruct;

@end

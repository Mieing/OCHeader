@class IESECGoodsPOIModel, NSString, NSDictionary, NSArray, IESECSliceAction, NSNumber;

@interface IESECGoodsDetailSKUMetaModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECGoodsPOIModel *poiInfo;
@property (nonatomic) BOOL isAddToCart;
@property (nonatomic) long long sceneType;
@property (nonatomic) long long actionType;
@property (copy, nonatomic) NSString *enterFromDetailComponent;
@property (nonatomic) BOOL isGroupbuying;
@property (nonatomic) BOOL isCustombuying;
@property (nonatomic) BOOL isGotoNativeOrderPage;
@property (retain, nonatomic) NSNumber *termCount;
@property (nonatomic) BOOL scrollToInstallment;
@property (copy, nonatomic) NSString *receiveAddressId;
@property (copy, nonatomic) NSString *bizCampaignType;
@property (nonatomic) BOOL forceYataSku;
@property (copy, nonatomic) NSString *bizIdentifier;
@property (copy, nonatomic) NSString *nGroupToken;
@property (copy, nonatomic) NSDictionary *trackMeta;
@property (copy, nonatomic) NSString *selectedCarId;
@property (copy, nonatomic) NSArray *selectedSpecIDs;
@property (copy, nonatomic) NSDictionary *extraSKUDict;
@property (retain, nonatomic) IESECSliceAction *skuAddCartAction;
@property (retain, nonatomic) IESECSliceAction *skuGroupbuyAction;
@property (retain, nonatomic) IESECSliceAction *skuCustombuyAction;
@property (retain, nonatomic) IESECSliceAction *skuBuyAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

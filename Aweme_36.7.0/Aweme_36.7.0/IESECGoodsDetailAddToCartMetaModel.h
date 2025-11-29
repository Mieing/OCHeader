@class NSString, NSDictionary, IESECToastElement;

@interface IESECGoodsDetailAddToCartMetaModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL addToCartDisabled;
@property (nonatomic) BOOL displayAddToCart;
@property (copy, nonatomic) NSString *receiveAddressId;
@property (retain, nonatomic) IESECToastElement *successToast;
@property (nonatomic) unsigned long long addCartAnimationStyle;
@property (nonatomic) BOOL addCartAnimationV2;
@property (copy, nonatomic) NSString *addCartCoverImageURL;
@property (copy, nonatomic) NSString *addCartSuccessSchema;
@property (copy, nonatomic) NSString *skuId;
@property (copy, nonatomic) NSDictionary *addCartExtraTrackMeta;
@property (nonatomic) long long businessLineID;
@property (retain, nonatomic) NSString *bizCampaignType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

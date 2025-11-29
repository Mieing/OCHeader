@class NSString, IESECURLModel, NSArray, IESECBalanceExchangeCouponDescriptionModel;

@interface IESECBalanceExchangeCouponModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *schema;
@property (retain, nonatomic) IESECURLModel *icon;
@property (retain, nonatomic) NSArray *backgroundColor;
@property (retain, nonatomic) IESECBalanceExchangeCouponDescriptionModel *subDescription;
@property (retain, nonatomic) IESECBalanceExchangeCouponDescriptionModel *mainDescription;
@property (retain, nonatomic) IESECBalanceExchangeCouponDescriptionModel *buttonDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconJSONTransformer;
+ (id)subDescriptionJSONTransformer;
+ (id)mainDescriptionJSONTransformer;
+ (id)buttonDescriptionJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

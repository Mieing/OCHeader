@class NSString, IESECURLModel, NSDictionary;

@interface IESECShopValueInfoItem : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *numberText;
@property (nonatomic) long long fullNumber;
@property (copy, nonatomic) NSString *unit;
@property (copy, nonatomic) NSString *valueText;
@property (copy, nonatomic) NSString *valueTextColor;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *descTextColor;
@property (retain, nonatomic) IESECURLModel *descIcon;
@property (retain, nonatomic) IESECURLModel *icon;
@property (retain, nonatomic) IESECURLModel *iconForSale;
@property (copy, nonatomic) NSString *jumpSchema;
@property (copy, nonatomic) NSString *itemName;
@property (copy, nonatomic) NSString *showEventName;
@property (copy, nonatomic) NSString *clickEventName;
@property (copy, nonatomic) NSDictionary *eventParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

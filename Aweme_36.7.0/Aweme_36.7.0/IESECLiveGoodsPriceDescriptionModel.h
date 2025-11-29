@class NSNumber, NSString;

@interface IESECLiveGoodsPriceDescriptionModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *priceTagType;
@property (retain, nonatomic) NSString *priceTagName;
@property (retain, nonatomic) NSString *textColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

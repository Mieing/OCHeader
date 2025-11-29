@class NSString;

@interface IESECGoodsPresaleModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) double initTimeinterval;
@property (nonatomic) double serverTime;
@property (nonatomic) double deliveryTime;
@property (copy, nonatomic) NSString *endText;
@property (copy, nonatomic) NSString *deliveryTextTag;
@property (copy, nonatomic) NSString *deliveryText;
@property (copy, nonatomic) NSString *buyButtonPrefix;
@property (nonatomic) double endTime;
@property (readonly, nonatomic) double currentTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end

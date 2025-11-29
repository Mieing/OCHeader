@class NSString, AWEEcommerceSearchPromptData;

@interface AWEEcommerceSearchPathHintCard : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long type;
@property (retain, nonatomic) AWEEcommerceSearchPromptData *promptData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)promptDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

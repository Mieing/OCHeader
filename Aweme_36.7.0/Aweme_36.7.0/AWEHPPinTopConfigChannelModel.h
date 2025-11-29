@class NSString, NSArray;

@interface AWEHPPinTopConfigChannelModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *tabID;
@property (retain, nonatomic) NSArray *commonModels;
@property (retain, nonatomic) NSArray *customModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)customModelsJSONTransformer;
+ (id)commonModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isValid;

@end

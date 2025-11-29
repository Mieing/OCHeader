@class NSArray, NSDictionary, NSString;

@interface AWEPOIBTMStandDataModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *bcmParam;
@property (copy, nonatomic) NSDictionary *btmGeneralParam;
@property (copy, nonatomic) NSDictionary *btmClientParam;
@property (copy, nonatomic) NSDictionary *btmServerParam;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bcmParamJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

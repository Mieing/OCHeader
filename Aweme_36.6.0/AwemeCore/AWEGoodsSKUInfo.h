@class NSDictionary, NSArray, NSString;

@interface AWEGoodsSKUInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSDictionary *stockMap;
@property (copy, nonatomic) NSDictionary *specImages;
@property (copy, nonatomic) NSArray *specs;
@property (nonatomic) BOOL onePic;
@property (nonatomic) unsigned long long defaultUserLimit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)specsJSONTransformer;
+ (id)stockMapJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

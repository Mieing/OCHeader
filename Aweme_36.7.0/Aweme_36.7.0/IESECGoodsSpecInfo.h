@class NSArray, NSString;

@interface IESECGoodsSpecInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *specList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)specListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

@class NSString, NSArray;

@interface AWEDislikeDimensionModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *icon;
@property (copy, nonatomic) NSString *placeHolderImgName;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *entitys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entitysJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

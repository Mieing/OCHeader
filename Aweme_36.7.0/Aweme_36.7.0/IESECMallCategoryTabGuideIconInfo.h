@class NSString, NSArray;

@interface IESECMallCategoryTabGuideIconInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *URI;
@property (copy, nonatomic) NSArray *URLList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)guideIconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

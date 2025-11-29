@class NSArray, NSString;

@interface IESECIconsWithSpaceElement : MTLModel <MTLJSONSerializing>

@property (nonatomic) double space;
@property (copy, nonatomic) NSArray *iconImageList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconImageListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

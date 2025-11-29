@class NSArray, NSString;

@interface IESECMallPriorityGroupModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *images;
@property (retain, nonatomic) NSArray *animations;
@property (retain, nonatomic) NSArray *templates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)templatesJSONTransformer;
+ (id)animationsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)imagesJSONTransformer;

- (void).cxx_destruct;

@end

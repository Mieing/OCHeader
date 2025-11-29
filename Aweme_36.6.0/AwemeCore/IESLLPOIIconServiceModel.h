@class IESLLifeURLModel, NSString;

@interface IESLLPOIIconServiceModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long serviceType;
@property (nonatomic) unsigned long long serviceIconType;
@property (retain, nonatomic) IESLLifeURLModel *icon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

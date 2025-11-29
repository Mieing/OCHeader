@class NSArray, IESEffectModel, NSString;

@interface IESEffectVideoInfoDesignerWrapperModel : MTLModel <MTLJSONSerializing>

@property (readonly, copy, nonatomic) IESEffectModel *effect;
@property (readonly, copy, nonatomic) NSArray *videoInfos;
@property (readonly, copy, nonatomic) NSString *designerName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (void).cxx_destruct;

@end

@class NSString;

@interface IESLiveFaceEffectInstructionSubTipModel : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *imageUrl;
@property (copy, nonatomic) NSString *tipText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end

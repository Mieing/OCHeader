@class NSString, NSArray;

@interface IESLiveFaceEffectInstructionInfoModel : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *tipText;
@property (copy, nonatomic) NSString *tipTilte;
@property (retain, nonatomic) NSArray *subTipList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;


@end

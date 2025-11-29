@class NSString, IESLLGDRateTagStruct;

@interface IESLLGDRateCommonTag : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *sub_type;
@property (retain, nonatomic) IESLLGDRateTagStruct *cell_mode;
@property (nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cell_modeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

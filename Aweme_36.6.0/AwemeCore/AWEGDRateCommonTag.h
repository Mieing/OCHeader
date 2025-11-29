@class NSString, AWEGDRateTagStruct;

@interface AWEGDRateCommonTag : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *sub_type;
@property (retain, nonatomic) AWEGDRateTagStruct *cell_mode;
@property (nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cell_modeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

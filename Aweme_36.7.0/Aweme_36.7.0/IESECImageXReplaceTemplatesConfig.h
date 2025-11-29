@class NSArray, NSDictionary, NSString;

@interface IESECImageXReplaceTemplatesConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *customParams;
@property (copy, nonatomic) NSDictionary *finalParams;
@property (copy, nonatomic) NSString *targetTemplate;
@property (copy, nonatomic) NSArray *contents;
@property (copy, nonatomic) NSString *targetServiceId;
@property (copy, nonatomic) NSString *targetFormat;
@property (copy, nonatomic) NSString *originTmplString;
@property (copy, nonatomic) NSString *ecCommonTmplString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)contentsIsMatchURLString:(id)a0;
- (void).cxx_destruct;

@end

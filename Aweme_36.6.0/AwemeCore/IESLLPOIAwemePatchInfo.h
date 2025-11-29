@class NSString;

@interface IESLLPOIAwemePatchInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *promptText;
@property (copy, nonatomic) NSString *promptButtonText;
@property (nonatomic) long long itemPatchPoiPromptMark;
@property (copy, nonatomic) NSString *extraJsonString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)p_parse:(id)a0;
- (void).cxx_destruct;

@end

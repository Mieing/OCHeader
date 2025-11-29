@class NSNumber, NSString;

@interface APCDTOEditorFeatureExtension : AWEBaseBizConfigModel <MTLJSONSerializing>

@property (copy, nonatomic) NSNumber *disableAETextTemplate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

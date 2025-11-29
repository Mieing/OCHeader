@class NSString;

@interface APCDTONoteConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *templateId;
@property (nonatomic) long long templateType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)templateTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)syncToPublishViewModel:(id)a0;
- (void).cxx_destruct;

@end

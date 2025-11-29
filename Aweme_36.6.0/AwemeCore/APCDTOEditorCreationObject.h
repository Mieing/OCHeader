@class NSString;

@interface APCDTOEditorCreationObject : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *mediaType;
@property (nonatomic) long long source;
@property (copy, nonatomic) NSString *url;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sourceJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

@class NSString;

@interface AWEDTONoteEditModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL skipEditToPublish;
@property (copy, nonatomic) NSString *templateId;
@property (copy, nonatomic) NSString *templateCategoryId;
@property (copy, nonatomic) NSString *templateType;
@property (copy, nonatomic) NSString *templateName;
@property (nonatomic) BOOL isParsedTemplateCategory;
@property (nonatomic) BOOL hasErased;
@property (copy, nonatomic) NSString *aiEraserOriginImagePath;
@property (copy, nonatomic) NSString *recordStickerId;
@property (copy, nonatomic) NSString *originAssetCache;
@property (nonatomic) BOOL useOriginAssetCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

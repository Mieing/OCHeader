@class NSArray, NSString;

@interface AWEVideoCoverEditorRecentlyUsedTemplateInfoResponseModel : AWEBaseApiModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *lokiTemplateList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lokiTemplateListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

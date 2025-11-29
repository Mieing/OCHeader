@class NSString, APCDTOEditorResourceExtension;

@interface APCDTOEditorResource : MTLModel <AWEStudioComposerModelExtension, MTLJSONSerializing>

@property (retain, nonatomic) APCDTOEditorResourceExtension *extension;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *url;
@property (nonatomic) BOOL isLocal;
@property (nonatomic) long long fileType;
@property (copy, nonatomic) NSString *livePhotoVideoUrl;
@property (copy, nonatomic) NSString *cache;
@property (copy, nonatomic) NSString *cacheKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fileTypeJSONTransformer;
+ (void)apc_prepare:(id)a0 folder:(id)a1 index:(long long)a2 completion:(id /* block */)a3;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

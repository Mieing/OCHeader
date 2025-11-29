@class NSArray, NSString;

@interface IESEffectResourceResponseModel : MTLModel <MTLJSONSerializing>

@property (readonly, copy, nonatomic) NSArray *resourceList;
@property (readonly, copy, nonatomic) NSArray *urlPrefixes;
@property (readonly, copy, nonatomic) NSString *iconURI;
@property (readonly, copy, nonatomic) NSArray *iconURLs;
@property (readonly, copy, nonatomic) NSString *idMap;
@property (readonly, copy, nonatomic) NSString *effectId;
@property (nonatomic) BOOL needTriggerDownload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)resourceListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)generateAllURLs;
- (BOOL)resourcesAllDownloaded;
- (void).cxx_destruct;
- (id)allResourcePaths;
- (BOOL)isEqual:(id)a0;

@end

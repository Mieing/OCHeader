@class NSArray, NSString;

@interface IESEffectPreloadResourceModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *fileDownloadURLs;
@property (readonly, copy, nonatomic) NSString *resourceKey;
@property (readonly, copy, nonatomic) NSString *resourceName;
@property (readonly, copy, nonatomic) NSString *version;
@property (readonly, copy, nonatomic) NSString *resourceURI;
@property (readonly, copy, nonatomic) NSString *type;
@property (readonly, copy, nonatomic) NSString *level;
@property (readonly, copy, nonatomic) NSArray *urlPrefixs;
@property (readonly, copy, nonatomic) NSString *downloadType;
@property (readonly, copy, nonatomic) NSString *blockFileType;
@property (readonly, nonatomic) long long category;
@property (readonly, nonatomic) long long protocol;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)updateFileDownloadURLsIfNeed;
- (void).cxx_destruct;

@end

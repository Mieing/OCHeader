@class AWEImageTemplateExtraInfoModel, NSString, NSDictionary, NSArray, AWEVideoTemplateExtraInfoModel;

@interface AWETemplateListTemplateInfoResponseModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *templateID;
@property (nonatomic) long long appID;
@property (copy, nonatomic) NSString *regionKey;
@property (nonatomic) long long templateType;
@property (copy, nonatomic) NSString *mediaID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *templateDescription;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (copy, nonatomic) NSString *md5;
@property (copy, nonatomic) NSString *templateUri;
@property (copy, nonatomic) NSDictionary *templateCoverModel;
@property (copy, nonatomic) NSArray *tags;
@property (copy, nonatomic) NSString *extra;
@property (retain, nonatomic) AWEImageTemplateExtraInfoModel *imageTemplateExt;
@property (retain, nonatomic) AWEVideoTemplateExtraInfoModel *videoTemplateExt;
@property (nonatomic) long long provider;
@property (nonatomic) BOOL isDownloaded;
@property (retain, nonatomic) NSDictionary *resourcesCache;
@property (copy, nonatomic) NSString *unzipPath;
@property (nonatomic) BOOL unzipPathCacheExist;
@property (nonatomic) BOOL resourcesCacheCacheExist;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imageTemplateExtJSONTransformer;
+ (id)videoTemplateExtJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)templateCoverURLs;
- (void).cxx_destruct;
- (BOOL)isHorizontal;

@end

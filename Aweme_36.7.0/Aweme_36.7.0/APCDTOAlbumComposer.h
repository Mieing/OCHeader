@class APCDTOAIMemSearch, NSString, APCDTOAlbumConfig, APCDTOAlbumComposerExtension, APCDTOSearchTabConfig, APCDTOSearchTagConfig, APCDTOCustomCellConfig;

@interface APCDTOAlbumComposer : MTLModel <AWEStudioComposerModelExtension, MTLJSONSerializing>

@property (retain, nonatomic) APCDTOAlbumComposerExtension *extension;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) APCDTOAlbumConfig *config;
@property (nonatomic) long long selectState;
@property (copy, nonatomic) NSString *enterMethodAlbum;
@property (nonatomic) BOOL isSyncPage;
@property (nonatomic) BOOL isDraft;
@property (nonatomic) long long chooseScene;
@property (nonatomic) long long columnCount;
@property (nonatomic) long long customCellType;
@property (copy, nonatomic) NSString *customCellSchema;
@property (nonatomic) BOOL isFullScreenShow;
@property (retain, nonatomic) APCDTOCustomCellConfig *customCellConfig;
@property (retain, nonatomic) APCDTOSearchTabConfig *searchTabConfig;
@property (retain, nonatomic) APCDTOSearchTagConfig *searchTagConfig;
@property (copy, nonatomic) NSString *vidFeatures;
@property (retain, nonatomic) APCDTOAIMemSearch *aiMemSearch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)configJSONTransformer;
+ (id)customCellTypeJSONTransformer;
+ (id)customCellConfigJSONTransformer;
+ (id)searchTabConfigJSONTransformer;
+ (id)searchTagConfigJSONTransformer;
+ (id)aiMemSearchJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setupConfig:(id /* block */)a0;
- (void)syncToPublishViewModel:(id)a0;
- (void).cxx_destruct;

@end

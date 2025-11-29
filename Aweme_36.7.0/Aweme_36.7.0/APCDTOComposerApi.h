@class APCDTOPublishComposer, NSString, APCDTOBizData, APCDTOEditorComposer, APCDTOComposerFeature, APCDTOCommonData, APCDTOCameraComposer, APCDTOMergeConfig, APCDTODataConfig, APCDTOAlbumComposer, APCDTORichText, APCDTOEditComposerModel;

@interface APCDTOComposerApi : MTLModel <APCDTOComposerApiSyncProtocol, MTLJSONSerializing>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) APCDTOCommonData *commonData;
@property (retain, nonatomic) APCDTOBizData *bizData;
@property (retain, nonatomic) APCDTOCameraComposer *camera;
@property (retain, nonatomic) APCDTOAlbumComposer *album;
@property (retain, nonatomic) APCDTOEditorComposer *infiniEditor;
@property (retain, nonatomic) APCDTOPublishComposer *publish;
@property (retain, nonatomic) APCDTOMergeConfig *mergeConfig;
@property (retain, nonatomic) APCDTOComposerFeature *composerFeature;
@property (retain, nonatomic) APCDTODataConfig *dataConfig;
@property (retain, nonatomic) APCDTORichText *richText;
@property (retain, nonatomic) APCDTOEditComposerModel *editor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createInstance;
+ (id)albumJSONTransformer;
+ (id)publishJSONTransformer;
+ (id)createComposerModelForExportScenario;
+ (id)bizDataJSONTransformer;
+ (id)commonDataJSONTransformer;
+ (id)cameraJSONTransformer;
+ (id)infiniEditorJSONTransformer;
+ (id)mergeConfigJSONTransformer;
+ (id)composerFeatureJSONTransformer;
+ (id)dataConfigJSONTransformer;
+ (id)richTextJSONTransformer;
+ (id)editorJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)buildBasicConfig:(id /* block */)a0;
- (void)buildEditConfig:(id /* block */)a0;
- (void)buildDataConfig:(id /* block */)a0;
- (void)buildAlbumConfig:(id /* block */)a0;
- (void)buildRecordConfig:(id /* block */)a0;
- (void)buildPublishConfig:(id /* block */)a0;
- (void)prepareWithExtensionDictionary:(id)a0;
- (void)syncToPublishViewModel:(id)a0;
- (void).cxx_destruct;
- (id)extensionDictionary;
- (id)deepCopy;

@end

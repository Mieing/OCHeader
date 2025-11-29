@class NSArray, NSMutableDictionary, IESEffectModel, EEUIAnnotationParser, AWECustomizedPropUploadParametersResponseModel;
@protocol ACCMessageProtocol;

@interface AWEEffectEditorManager : NSObject

@property (weak, nonatomic) id<ACCMessageProtocol> effectMessage;
@property (retain, nonatomic) EEUIAnnotationParser *propParser;
@property (retain, nonatomic) NSArray *annotationList;
@property (retain, nonatomic) IESEffectModel *currentProp;
@property (retain, nonatomic) AWECustomizedPropUploadParametersResponseModel *reponseModel;
@property (retain, nonatomic) NSMutableDictionary *exportStates;
@property (copy, nonatomic) id /* block */ customStickerExportCallback;
@property (copy, nonatomic) id /* block */ customStickerURSExportCallBack;

+ (void)setEffectHandle:(BOOL)a0;
+ (void)asyncGetCustomizedEffectIdentifierWithExtraParameters:(id)a0 completion:(id /* block */)a1;
+ (void)fetchCustomizedEffectListWithPanel:(id)a0 category:(id)a1 pageCount:(long long)a2 cursor:(long long)a3 extraParameters:(id)a4 completion:(id /* block */)a5;
+ (void)deleteCustomizedEffectsWithEffectIDs:(id)a0 extraParameters:(id)a1 completion:(id /* block */)a2;
+ (void)bindNLEInterface:(id)a0;
+ (id)customizedPropPathWithDraftId:(id)a0 customizeEffectId:(id)a1;
+ (id)relativePathWithAbsolutePath:(id)a0;
+ (id)absolutePathWithRelativePath:(id)a0 draftId:(id)a1;
+ (void)saveSticker:(id)a0 withDestination:(id)a1 completion:(id /* block */)a2;
+ (int)getThumbnailWithPHAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3 resultHandler:(id /* block */)a4;
+ (void)notifyCustomStickerExportedIfNeeded:(id)a0;
+ (id)getTextAnnotation:(id)a0;
+ (void)loadingUIAnnotation:(id)a0;
+ (id)parseringUIAnnotation:(id)a0;
+ (id)loadPropIfNeededWith:(id)a0;
+ (unsigned long long)exportStateWithRelativePath:(id)a0;
+ (void)observeCustomStickerExportCallback:(id /* block */)a0;
+ (void)p_uploadCustomizedEffectWithEffectID:(id)a0 sourceID:(id)a1 filePath:(id)a2 iconPath:(id)a3 coverPath:(id)a4 description:(id)a5 uploadConfig:(id)a6 extraParameters:(id)a7 completion:(id /* block */)a8;
+ (void)requestUploadParametersWithcompletion:(id /* block */)a0;
+ (void)p_uploadTextOnImageEffectWithEffectID:(id)a0 sourceID:(id)a1 filePath:(id)a2 extraParameters:(id)a3 uploadConfig:(id)a4 completion:(id /* block */)a5;
+ (void)saveImageAsPropIcon:(id)a0 iconPath:(id)a1 complete:(id /* block */)a2;
+ (id)propSaveQueue;
+ (id)customizedPropDirectoryName;
+ (void)p_deletePropWithRelativePath:(id)a0 draftId:(id)a1;
+ (id)generateTempPathIfNeededForCustomizedPropPath:(id)a0 draftID:(id)a1;
+ (void)bindEffectCamera:(id)a0;
+ (id)getImageAnnotation:(id)a0;
+ (BOOL)isTextEditableProp:(id)a0;
+ (BOOL)isEditableProp:(id)a0;
+ (BOOL)hasChangedForOriginal:(id)a0;
+ (BOOL)hasChangedForLast:(id)a0;
+ (id)getChangedTextContent:(id)a0;
+ (id)getChangedImageContent:(id)a0;
+ (id)getChangedVideoContent:(id)a0;
+ (void)saveSticker:(id)a0 withDestination:(id)a1 taskId:(id)a2 completion:(id /* block */)a3;
+ (void)notifyCustomStickerURSExporteIfNeeded:(id)a0;
+ (void)observeCustomStickerURSExportCallback:(id /* block */)a0;
+ (void)asyncGetCustomizedPropIdentifierWithCompletion:(id /* block */)a0;
+ (void)uploadCustomizedEffectWithEffectID:(id)a0 sourceID:(id)a1 filePath:(id)a2 iconPath:(id)a3 coverPath:(id)a4 description:(id)a5 uploadConfig:(id)a6 extraParameters:(id)a7 completion:(id /* block */)a8;
+ (void)uploadTextOnImageEffectWithEffectID:(id)a0 sourceID:(id)a1 filePath:(id)a2 extraParameters:(id)a3 completion:(id /* block */)a4;
+ (id)generatePropPathWithDraftId:(id)a0 taskId:(id)a1;
+ (id)customPropRelativePathWithEffectId:(id)a0;
+ (void)deleteCustomPropWithDraftId:(id)a0 relativePath:(id)a1;
+ (void)deleteAllCustomPropsWithDraftId:(id)a0;
+ (void)copyCutomizedEffectToTempPathWithPropPath:(id)a0 iconPath:(id)a1 coverPath:(id)a2 draftID:(id)a3 completion:(id /* block */)a4;
+ (void)deleteTempCustomizedPropWithDraftID:(id)a0;
+ (id)shareInstance;

- (void)saveSticker:(id)a0 withDestination:(id)a1 completion:(id /* block */)a2;
- (void)saveImageAsPropIcon:(id)a0 iconPath:(id)a1 compressUsePNG:(BOOL)a2 complete:(id /* block */)a3;
- (void)notifyCustomStickerExportedIfNeeded:(id)a0;
- (id)getTextAnnotation:(id)a0;
- (void)loadingUIAnnotation:(id)a0;
- (id)parseringUIAnnotation:(id)a0;
- (id)loadPropIfNeededWith:(id)a0;
- (unsigned long long)exportStateWithRelativePath:(id)a0;
- (void)observeCustomStickerExportCallback:(id /* block */)a0;
- (void)saveImageAsPropIcon:(id)a0 iconPath:(id)a1 complete:(id /* block */)a2;
- (void).cxx_destruct;

@end

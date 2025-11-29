@class NSString;

@interface ACCAIGCAIMateEditUtil : NSObject <AWEStudioAIMateEditUtilProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)preloadLocalCheckModelResource:(id /* block */)a0;
+ (id)moveEditFrameReferenceFilePathFromTmp2DraftFolder:(id)a0 bizUUID:(id)a1 taskID:(id)a2 index:(unsigned long long)a3;
+ (void)sendAiSelectTaskRequestWithTaskId:(id)a0 groupId:(id)a1 selectType:(long long)a2;
+ (void)writeBackResultToLocalDraftFileWithAsync:(id)a0 ugcModel:(id)a1;
+ (void)createTargetFolderPathIfNeed:(id)a0;
+ (id)localBachResultForLocalId:(id)a0;
+ (unsigned long long)getAIPropType:(id)a0;
+ (id)mergeImageOrVideoSizeTrackFromBusinessModel:(id)a0;
+ (id)noDraftTemporaryDirectory;
+ (id)editFrameReferenceFolderPathWithFileName:(id)a0 bizUUID:(id)a1 taskID:(id)a2;
+ (id)transAIMateEditContextFromDraftModel:(id)a0;
+ (id)initNoDraftTemporaryDirectory;
+ (id)aiMateEditTaskLocalPath:(id)a0;
+ (void)updateWithPath:(id)a0 localFilePath:(id)a1 checkModel:(id)a2 resultImage:(id)a3 creationToolsModel:(id)a4 infoModel:(id)a5;
+ (void)updateWithPath:(id)a0 localVideoFilePath:(id)a1 infoModel:(id)a2;
+ (void)updateLocalBachForAssetWithOldId:(id)a0 newId:(id)a1;
+ (void)extractLocalBachForAssetWithLocalId:(id)a0 filePath:(id)a1;
+ (id)cacheDictionary;


@end

@class NSString, CAKAlbumListCustomCellConfig, ACCPicTemplateModel, AWERepoInspirationModel, APCDTOComposerApi;

@interface ACCPicTemplateShootEntranceConfigHelper : NSObject <AWEStudioPicTemplateShootEntranceConfig>

@property (nonatomic) unsigned long long cellConfigType;
@property (retain, nonatomic) CAKAlbumListCustomCellConfig *cellConfig;
@property (retain, nonatomic) NSString *picTemplateId;
@property (retain, nonatomic) ACCPicTemplateModel *picTemplateModel;
@property (nonatomic) BOOL isPrepareOpenCamera;
@property (retain, nonatomic) NSString *shootWay;
@property (retain, nonatomic) NSString *shootEnterFrom;
@property (retain, nonatomic) NSString *preferCreationId;
@property (retain, nonatomic) AWERepoInspirationModel *inspirationModel;
@property (retain, nonatomic) APCDTOComposerApi *externalComposerApi;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initAndPrepare;
- (id)cameraCustomCellConfigWithType:(unsigned long long)a0;
- (void)openCameraCreation;
- (void)handleResultWithContext:(id)a0 creationData:(id)a1 uiControlHandler:(id)a2;
- (void)enterEditorPagefilePath:(id)a0 completion:(id /* block */)a1;
- (id)initAndPrepareWithType:(unsigned long long)a0;
- (void).cxx_destruct;

@end

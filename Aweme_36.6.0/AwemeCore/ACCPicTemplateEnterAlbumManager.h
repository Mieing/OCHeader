@class ACCPicTemplateModel, NSString, AWEModalTransitionDelegate, ACCPicTemplateShootEntranceConfigHelper;
@protocol ACCOpenAlbumAssetsProtocol;

@interface ACCPicTemplateEnterAlbumManager : NSObject <ACCPicTemplateEnterAlbumManagerProtocol>

@property (retain, nonatomic) id<ACCOpenAlbumAssetsProtocol> openAlbumAssetsProtocol;
@property (retain, nonatomic) ACCPicTemplateShootEntranceConfigHelper *shootEntranceConfig;
@property (retain, nonatomic) ACCPicTemplateModel *templateModel;
@property (nonatomic) BOOL hasCancelRequest;
@property (retain, nonatomic) AWEModalTransitionDelegate *transitionDelegate;
@property (nonatomic) BOOL disableShoot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultManager;

- (void)openAlbumForPixelPicTemplateWithPublishViewModel:(id)a0 extensionDic:(id)a1 dismissBlock:(id /* block */)a2;
- (void)openAlbumForEffectPicTemplateWithPublishViewModel:(id)a0 extensionDic:(id)a1 dismissBlock:(id /* block */)a2;
- (void)finishedAssetSelectedWith:(id)a0 publishModel:(id)a1;
- (BOOL)isSupportCameraEntrance;
- (void)configShootEntranceWith:(id)a0;
- (void)enterAlbumWithPublishViewModel:(id)a0 extensionDic:(id)a1 dismissBlock:(id /* block */)a2;
- (void)openAlbumWithPublishViewModel:(id)a0 dismissAction:(id /* block */)a1 completionAction:(id /* block */)a2;
- (void).cxx_destruct;

@end

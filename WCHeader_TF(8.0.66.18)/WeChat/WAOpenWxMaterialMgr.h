@class UIImage, NSString, WAWxMaterialStorage;

@interface WAOpenWxMaterialMgr : MMUserService <PBMessageObserverDelegate, MMResourceMgrExt, MMServiceProtocol>

@property (retain, nonatomic) UIImage *cornerImg;
@property (retain, nonatomic) WAWxMaterialStorage *storage;
@property (nonatomic) unsigned int lastOpenType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dirForDefaultWebResource;
+ (id)confPathForDefaultWebResource;
+ (id)dirForUpdatedWebResource;
+ (id)confPathForUpdatedWebResource;
+ (id)htmlPathForUpdatedWebResource;
+ (id)htmlTransPathForUpdatedWebResource;
+ (id)batchFileExtByArray:(id)a0;

- (void)onServiceInit;
- (void)dealloc;
- (void)updateWebResource;
- (void)tryCopyWebResource;
- (void)onResUpdateFinish:(long long)a0 resType:(unsigned int)a1 subResType:(unsigned int)a2;
- (BOOL)forbidMaterialType:(unsigned int)a0;
- (void)updateWeAppForMaterial:(id)a0;
- (void)requestWeAppList:(id)a0;
- (void)batchRequestWeAppList:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)onBatchMaterialWeApp:(id)a0;
- (void)onMaterialWeAppRsp:(id)a0 req:(id)a1;
- (id)getUnstatedWording;
- (id)getInfoForFileExt:(id)a0;
- (id)getInfoForWebview;
- (id)getInfoForImageFilePath:(id)a0;
- (id)getFileExtForImage:(id)a0;
- (id)getInfoForVideo;
- (id)getFileExtForVideo;
- (id)getInfoForFile:(id)a0;
- (id)getFileExtForFile:(id)a0;
- (id)getInfoForMessageWrap:(id)a0;
- (id)getFileExtForMessageWrap:(id)a0;
- (id)GetFilePath:(id)a0;
- (id)getFileExtForTextMessage;
- (id)getInfoForTextMessage;
- (id)getCornerImg;
- (id)genAppActionSheetItem:(id)a0;
- (id)genAppListActionSheetItem:(id)a0 scene:(unsigned int)a1;
- (id)genAppListActionSheetItem:(id)a0 scene:(unsigned int)a1 openType:(unsigned int)a2;
- (unsigned int)getReportMaterialSceneFromMsg:(id)a0;
- (id)getWeAppIcon:(id)a0;
- (id)safeStr:(id)a0;
- (id)safeArr:(id)a0;
- (id)getMatarialTypeName:(unsigned int)a0;
- (BOOL)shouldShowThirdPartyServiceTips;
- (BOOL)shouldShowThirdPartyServiceTipsForScene:(unsigned long long)a0;
- (void)showAllAppForMaterial:(id)a0;
- (void)realShowAllAppForMaterial:(id)a0;
- (void)oldShowAllAppForMaterial:(id)a0;
- (void)openAppForMaterial:(id)a0;
- (void)openAppForMaterials:(id)a0 wxaCard:(id)a1 chatUsername:(id)a2 chatType:(unsigned long long)a3 sheetScene:(unsigned long long)a4;
- (void)updateMaterial:(id)a0;
- (id)makeExtMimeDic;
- (id)getExtMimeDic;
- (id)getMimeByExt:(id)a0;
- (id)getExtByMime:(id)a0;
- (id)adjustRecommName:(id)a0 appName:(id)a1;
- (id)adjustOneLine:(id)a0;
- (id)materialWeAppDic;
- (void)reportOpenMaterialItem:(id)a0;
- (void)reportMaterialItemClicked:(id)a0;
- (void)reportMaterialItemExposed:(id)a0;
- (void).cxx_destruct;

@end

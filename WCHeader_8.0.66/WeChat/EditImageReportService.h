@class NSString, EditImageReportObj, NSMutableArray;

@interface EditImageReportService : MMUserService <MMServiceProtocol>

@property (nonatomic) unsigned long long eventPublishId;
@property (nonatomic) float cpuUsage;
@property (nonatomic) long long memoryResideng;
@property (retain, nonatomic) NSString *snsTaskLastClientID;
@property (retain, nonatomic) EditImageReportObj *editImageReportObj;
@property (retain, nonatomic) NSMutableArray *editImageReportObjArray;
@property (nonatomic) unsigned long long showPostEntranceTime;
@property (nonatomic) unsigned int seekBarDragCount;
@property (nonatomic) unsigned int cropRectChangeCount;
@property (nonatomic) unsigned int isTimeLimitExceeded;
@property (nonatomic) BOOL isSightBeautyEffect;
@property (copy, nonatomic) NSString *sightBeautyEffectInfo;
@property (nonatomic) BOOL isOtherProcessTagCntOfSendOrPostLog;
@property (nonatomic) unsigned int tagCntOfSendOrPostLog;
@property (nonatomic) BOOL isSnsDraft;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)getSavedAlbumPhotoFileSize:(id)a0 withCompletion:(id /* block */)a1;
+ (void)fillEditImageReportObjVideoMediaInfo:(id)a0 withVideoPath:(id)a1;

- (void)initReportService;
- (void)finishReport;
- (void)quitReport;
- (void)resetEventPublishId;
- (void)resavePerformanceWithCpuUsage:(float)a0 memoryResident:(long long)a1;
- (void)cleanPerformance;
- (void)reportFinderEditResultWithType:(unsigned long long)a0 successful:(BOOL)a1 videoDuration:(double)a2 videoSize:(struct CGSize { double x0; double x1; })a3 composeDuration:(unsigned int)a4;
- (void)reportCameraActionsLog;
- (void)reportSendOrPostLog;
- (void)doSnsCommonMediaReportObj:(id)a0 withUploadMedia:(id)a1;
- (void)doSnsImageReportObj:(id)a0 withUploadMedia:(id)a1;
- (void)doSnsVideoReportObj:(id)a0 withUploadMedia:(id)a1;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)OnMsgSendSuccess:(id)a0;
- (void)onSnsNewCommitFinished:(id)a0 task:(id)a1;
- (id)getSnsCameraEditorReportItems:(BOOL)a0 isEdited:(BOOL)a1;
- (id)getSnsCameraEditorReportItems:(BOOL)a0 isEdited:(BOOL)a1 editImageAttr:(id)a2;
- (unsigned long long)getEditImageReportObjEditorSessionID;
- (id)dealSnsImageMediaInfo:(id)a0 withOriginImageSize:(struct CGSize { double x0; double x1; })a1 withEditedImageSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;

@end

@interface ACCImageQualityTrackParamUtils : NSObject

+ (void)replaceSourceWithCreationId:(id)a0 uuid:(id)a1 filePath:(id)a2;
+ (BOOL)isMultiToOneWithProject:(id)a0;
+ (id)makeEditInfoWithImageFile:(id)a0;
+ (void)combineMultiProjects:(id)a0 toOneProject:(id)a1;
+ (id)parseWithContext:(id)a0 UUID:(id)a1;
+ (void)assembleChangelogsWithProject:(id)a0 editChangelogs:(id)a1;
+ (id)diffLogWithProject:(id)a0;
+ (id)getDowngradeReason:(id)a0;
+ (void)detectWithCreationId:(id)a0 uuids:(id)a1 source:(long long)a2 completion:(id /* block */)a3;
+ (id)newDefaultEditInfo:(id)a0;
+ (void)p_pollTrackImportQualityWithProject:(id)a0 retryCount:(long long)a1 report:(BOOL)a2;
+ (void)beginImageTrackSession:(id)a0 model:(id)a1 completion:(id /* block */)a2;
+ (void)setupImageQualityServicesWithProject:(id)a0;
+ (void)bindImageQualitysWithProject:(id)a0 removeUUIDs:(id)a1;
+ (void)pollTrackImportQualityWithProject:(id)a0 retryCount:(long long)a1 report:(BOOL)a2;
+ (id)formatCapturePosition:(long long)a0;
+ (id)formatCaptureRatio:(long long)a0;
+ (id)formatFrameRatio:(long long)a0;
+ (id)formatPreset:(id)a0;
+ (id)mediaDataWith:(id)a0 uuids:(id)a1;
+ (id)safeJsonStringWithDict:(id)a0;
+ (void)assembleChangelogsWithProject:(id)a0;
+ (void)showImageQualityDowngradeDialogWithCreationId:(id)a0 draftId:(id)a1;
+ (void)superResWithModel:(id)a0 exportItems:(id)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;
+ (void)beginImageTrackSession:(id)a0 model:(id)a1;

@end

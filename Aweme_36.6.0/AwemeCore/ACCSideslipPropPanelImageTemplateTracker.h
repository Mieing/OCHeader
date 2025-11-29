@interface ACCSideslipPropPanelImageTemplateTracker : NSObject

+ (id)commonTrackParams;
+ (void)recorderImageTemplatePrepareForApplyTimeWithID:(id)a0;
+ (void)trackerImageTemplateApplyWith:(id)a0 extraInfo:(id)a1;
+ (void)trackerImageTemplateClickToApplyWith:(id)a0 extraInfo:(id)a1;
+ (void)trackerImageTemplateFinishDownloadToApplyWith:(id)a0 extraInfo:(id)a1;
+ (void)trackerImageTemplateClickToStartDownloadWith:(id)a0 extraInfo:(id)a1;
+ (void)trackerImageTemplateDownloadZipWith:(id)a0 extraInfo:(id)a1;
+ (void)trackerImageTemplateDownloadResourcesWith:(id)a0 extraInfo:(id)a1;
+ (void)trackerImageTemplateStartToFinishDownloadWith:(id)a0 extraInfo:(id)a1;
+ (void)recorderImageTemplateClickTimeWithID:(id)a0;
+ (void)recorderImageTemplateStartDownloadTimeWithID:(id)a0;
+ (void)recorderImageTemplateFinishedDownloadTimeWithID:(id)a0;
+ (void)recorderImageTemplateStartDownloadZipTimeWithID:(id)a0;
+ (void)recorderImageTemplateStartDownloadResourcesTimeWithID:(id)a0;

@end

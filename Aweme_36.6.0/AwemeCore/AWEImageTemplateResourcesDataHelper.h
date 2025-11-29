@class AWEImageTemplateResourcesDownloader, NSString, NSObject;
@protocol OS_dispatch_group, OS_dispatch_queue, AWEImageTemplateResourcesDataHelperDelegate;

@interface AWEImageTemplateResourcesDataHelper : NSObject

@property (retain, nonatomic) AWEImageTemplateResourcesDownloader *templateResourcesDownloader;
@property (nonatomic) BOOL isRenderTemplateLocked;
@property (retain, nonatomic) NSString *diffJson;
@property (retain, nonatomic) NSString *unzipFilePath;
@property (retain, nonatomic) NSString *zipFilePath;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *templateDataGroup;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *downloadQueue;
@property (weak, nonatomic) id<AWEImageTemplateResourcesDataHelperDelegate> delegate;

+ (id)logSubTag;
+ (id)unzipTemplateWithZipFilePath:(id)a0 mediaID:(id)a1 trackParams:(id)a2;
+ (id)getTemplateUnzipPathWithTemplateID:(id)a0;
+ (id)p_downloadLock;

- (void)setShouldLockTemplateApply:(BOOL)a0;
- (BOOL)enableFinetuningAdjustment;
- (BOOL)applyTemplateResourcesJsonToNLEImageWrapperWithMediaID:(id)a0 trackParams:(id)a1;
- (void)downloadTemplateResourcesWithUnzipFilePath:(id)a0 mediaID:(id)a1 trackParams:(id)a2;
- (id)getNeedDownloadedTemplateResources;
- (void)combineTemplateResourcesWithUnzipFilePath:(id)a0 mediaID:(id)a1 trackParams:(id)a2;
- (BOOL)ifNeedApplyNewTemplateResources;
- (BOOL)applyTemplateResourcesJsonToNLEImageWrapper;
- (void)prepareImageTemplateResourcesWithMediaID:(id)a0 imageURI:(id)a1 imageCropInfo:(id)a2 originImageSize:(struct CGSize { double x0; double x1; })a3 trackParams:(id)a4;
- (void)prepareImageTemplateResourcesWithMediaID:(id)a0 templateInfoModel:(id)a1 imageURI:(id)a2 imageCropInfo:(id)a3 originImageSize:(struct CGSize { double x0; double x1; })a4 trackParams:(id)a5;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

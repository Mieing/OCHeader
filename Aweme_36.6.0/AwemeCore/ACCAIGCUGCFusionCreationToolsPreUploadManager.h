@class NSMutableDictionary, AWEResourceUploadParametersResponseModel, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface ACCAIGCUGCFusionCreationToolsPreUploadManager : NSObject

@property (retain, nonatomic) AWEResourceUploadParametersResponseModel *authorResponseModel;
@property (retain, nonatomic) NSMutableDictionary *uploadModelMap;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *pictureQueue;
@property (retain, nonatomic) NSMutableArray *netHelperArray;
@property (retain, nonatomic) NSMutableDictionary *videoUploadSchedulerMap;
@property (retain, nonatomic) NSMutableArray *videoUploadObserveArray;

+ (void)removeAllData;
+ (void)removeAllPreloadTask;
+ (void)cancelUploadPictureWithFilePaths:(id)a0;
+ (id)queryPictureUriWithFilePath:(id)a0;
+ (void)preloadGetUploadAuthor;
+ (id)resizeDataWithImage:(id)a0;
+ (BOOL)referenceVideoPreUploadIsRunningWithIdentifier:(id)a0;
+ (void)observeReferenceVideoContentPreUploadResultWithBlock:(id /* block */)a0;
+ (void)preUploadReferenceVideoContentWithExportResult:(id)a0 identifier:(id)a1 completion:(id /* block */)a2;
+ (BOOL)enablePreUpload;
+ (void)preUploadPictureWithFilePaths:(id)a0;
+ (void)cancelAllReferenceVideoPreUploadTasks;
+ (void)preUploadPictureWithFilePath:(id)a0;
+ (void)removeAllReferenceVideoPreUploadObservers;
+ (id)sharedInstance;

- (void)preloadUploadWithLoraModels:(id)a0;
- (void)getUploadAuthorCompletion:(id /* block */)a0;
- (BOOL)openImageCompress;
- (id)uploadImageDownsampleWithImagePath:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

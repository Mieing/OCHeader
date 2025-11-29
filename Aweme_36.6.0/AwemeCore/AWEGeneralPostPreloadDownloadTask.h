@class APCDTOEditorResource, NSDictionary, NSString, NSError;
@protocol ACCDownloadFileTask;

@interface AWEGeneralPostPreloadDownloadTask : NSObject <AWEGeneralPostPreloadTaskProtocol>

@property (retain, nonatomic) APCDTOEditorResource *resource;
@property (retain, nonatomic) id<ACCDownloadFileTask> downloadTask;
@property (nonatomic) long long state;
@property (nonatomic) double progress;
@property (copy, nonatomic) NSDictionary *progressExtra;
@property (retain, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)saveCacheFilePath:(id)a0;
- (id)initWithResource:(id)a0;
- (void).cxx_destruct;
- (void)start;
- (void)cancel;

@end

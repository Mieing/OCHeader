@class NSString, ACCPublishSaveLocalServiceConfig, AWEVideoPublishViewModel;
@protocol ACCPublishServiceSaveAlbumHandle;

@interface ACCPublishSaveLocalTask : NSObject <ACCPublishServiceSaveAlbumDelegate, ACCPublishSaveLocalTask>

@property (retain, nonatomic) id<ACCPublishServiceSaveAlbumHandle> saveAlbumHandle;
@property (retain, nonatomic) AWEVideoPublishViewModel *originalPublishModel;
@property (retain, nonatomic) ACCPublishSaveLocalServiceConfig *config;
@property (retain, nonatomic) AWEVideoPublishViewModel *saveLocalPublishModel;
@property (nonatomic) double progress;
@property (nonatomic) BOOL finished;
@property (nonatomic) BOOL cancelled;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (copy, nonatomic) id /* block */ resultBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_handleCancelError;
- (void)p_handleError:(id)a0 extra:(id)a1;
- (void)p_createTask;
- (id)p_saveToAlbumModel;
- (void)p_createHandleDidFinish:(id)a0 error:(id)a1;
- (void)configAndExecuteSaveAlbumHandle:(id)a0;
- (void)p_handleProgress:(double)a0;
- (void)p_finished;
- (void)saveAlbumDidFinishWithError:(id)a0 extra:(id)a1;
- (void)didChangeProgress:(double)a0;
- (id)initWithOriginalPublishModel:(id)a0 config:(id)a1 progressBlock:(id /* block */)a2 resultBlock:(id /* block */)a3;
- (void).cxx_destruct;
- (void)start;
- (void)cancel;

@end

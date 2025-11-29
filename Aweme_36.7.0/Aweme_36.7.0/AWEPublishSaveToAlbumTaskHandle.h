@class NSString, AWEPublishSaveToAlbumTask, AWEVideoPublishViewModel, AWEUserModel, AWEVideoDraftTracer;
@protocol ACCImageAlbumSaveAsVideoPip, ACCPublishServiceSaveAlbumDelegate;

@interface AWEPublishSaveToAlbumTaskHandle : NSObject <ACCPublishServiceSaveAlbumHandle>

@property (retain, nonatomic) AWEPublishSaveToAlbumTask *task;
@property (nonatomic) BOOL isSaveImageAlbumAsVideo;
@property (retain, nonatomic) id<ACCImageAlbumSaveAsVideoPip> saveAsVideoPip;
@property (retain, nonatomic) AWEVideoPublishViewModel *sourcePublishModel;
@property (retain, nonatomic) AWEVideoDraftTracer *tracer;
@property (retain, nonatomic) AWEUserModel *customerWatermarkAuthorInfo;
@property (nonatomic) BOOL isFeedVideoMergeTask;
@property (nonatomic) BOOL isSilentTask;
@property (nonatomic) BOOL forceIgnoreWatermark;
@property (nonatomic) BOOL isFromSaveAsVideoManager;
@property (copy, nonatomic) id /* block */ updateSourceModel;
@property (readonly, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (weak, nonatomic) id<ACCPublishServiceSaveAlbumDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancelWithCallback:(id /* block */)a0;
- (void)setParallelEdit:(BOOL)a0;
- (id)initWithModel:(id)a0 service:(id)a1 configuration:(id /* block */)a2 updateSourceModel:(id /* block */)a3;
- (id)initWithModel:(id)a0 service:(id)a1 sequenceEditService:(id)a2 configuration:(id /* block */)a3 updateSourceModel:(id /* block */)a4;
- (void).cxx_destruct;
- (void)execute;
- (void)cancel;

@end

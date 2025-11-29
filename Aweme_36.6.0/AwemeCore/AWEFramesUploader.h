@class NSString, NSArray, AWEVideoPublishViewModel, NSMutableArray, AWEResourceUploadParametersResponseModel;
@protocol ACCFileUploadServiceProtocol;

@interface AWEFramesUploader : NSObject

@property (retain, nonatomic) NSString *taskId;
@property (retain, nonatomic) NSString *videoId;
@property (retain, nonatomic) NSArray *videoIds;
@property (retain, nonatomic) NSString *awemeId;
@property (retain, nonatomic) NSString *draftFolder;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) NSArray *publishModels;
@property (retain, nonatomic) NSMutableArray *materialIdArr;
@property (retain, nonatomic) NSArray *bgStickerVideoAssests;
@property (retain, nonatomic) NSMutableArray *bgStickerVideoAssetsClipDuration;
@property (retain, nonatomic) AWEResourceUploadParametersResponseModel *uploadParameters;
@property (retain, nonatomic) id<ACCFileUploadServiceProtocol> uploadService;
@property (retain, nonatomic) NSMutableArray *imagePathArray;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) BOOL isZiping;
@property (nonatomic) unsigned long long stage;
@property (readonly, nonatomic) NSArray *materialIds;

- (id)commontParams;
- (void)startWithIndex:(long long)a0;
- (id)initVideoIds:(id)a0 awemeId:(id)a1 publishModels:(id)a2 uploadParameters:(id)a3 completion:(id /* block */)a4;
- (void)uploadImageZipWithUrl:(id)a0 completion:(id /* block */)a1;
- (void)zipFrames:(id)a0 completion:(id /* block */)a1;
- (void)exportFramesForPublishModel:(id)a0 awemeId:(id)a1 index:(long long)a2 completion:(id /* block */)a3;
- (id)absolutePathsWithFrames:(id)a0;
- (id)trackFramePathValid:(id)a0;
- (void)monitorZipUploadWithSuccess:(BOOL)a0 error:(id)a1 extraParams:(id)a2;
- (void)trackZipUploadWithSuccess:(BOOL)a0 error:(id)a1 extraParams:(id)a2;
- (id)initVideoId:(id)a0 awemeId:(id)a1 publishModel:(id)a2 uploadParameters:(id)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;
- (void)start;
- (void)uploadFinished;
- (BOOL)shouldStart;

@end

@class NSString, RACSubject, RACSignal, AWEVideoPublishViewModel, ACCGrootStickerModel;
@protocol ACCStickerServiceProtocol, ACCEditMusicServiceProtocol, ACCEditVideoFilterServiceProtocol, IESServiceProvider, ACCEditServiceProtocol;

@interface ACCGrootStickerViewModel : NSObject <ACCGrootStickerServiceProtocol>

@property (retain, nonatomic) RACSubject *showGrootStickerTipsSubject;
@property (retain, nonatomic) RACSubject *sendAutoAddGrootHashtagSubject;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCEditMusicServiceProtocol> musicService;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (weak, nonatomic) id<ACCEditVideoFilterServiceProtocol> filterService;
@property (nonatomic) unsigned long long handleStatus;
@property (retain, nonatomic) NSString *cameraDirectionString;
@property (copy, nonatomic) id /* block */ checkFinishedBlock;
@property (copy, nonatomic) id /* block */ onFetchFinishedBlock;
@property (copy, nonatomic) ACCGrootStickerModel *grootModel;
@property (nonatomic) BOOL isAutoRecognition;
@property (readonly, nonatomic) RACSignal *showGrootStickerTipsSignal;
@property (readonly, nonatomic) RACSignal *sendAutoAddGrootHashtagSignal;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (copy, nonatomic) NSString *extraInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindViewModel;
- (BOOL)shouldUploadFramesForRecommendation;
- (BOOL)canUseGrootSticker;
- (id)recoverGrootStickerModel;
- (void)sendShowGrootStickerTips;
- (void)saveCheckGrootRecognitionResult:(BOOL)a0 extra:(id)a1;
- (void)startCheckGrootRecognitionResult:(id /* block */)a0;
- (void)startFetchGrootRecognitionResult:(id /* block */)a0;
- (void)saveGrooSelectedResult:(id)a0;
- (void)sendAutoAddHashtagWith:(id)a0;
- (void)removeSelectedGrootResult;
- (void)didFinishFrameExtractWithZipURI:(id)a0 error:(id)a1;
- (BOOL)hasStickerFromRecord;
- (void)startCheckCousoryRecognitionWithFrameZip:(id)a0 creationId:(id)a1;
- (void)startFetchReconitionGrootModelsWithZip:(id)a0 creationId:(id)a1;
- (void)saveGrootStickerModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

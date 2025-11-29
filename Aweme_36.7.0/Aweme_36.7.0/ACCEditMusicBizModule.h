@class AWEVideoPublishViewModel;
@protocol ACCEditServiceProtocol, AWEEditKit, IESServiceProvider, AEKMegaEditor, ACCEditTextReaderServiceProtocol, ACCBusinessInputData;

@interface ACCEditMusicBizModule : NSObject

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (weak, nonatomic) id<ACCBusinessInputData> inputData;
@property (weak, nonatomic) id<ACCEditTextReaderServiceProtocol> editTextReaderService;
@property (weak, nonatomic) id<AWEEditKit> editKit;
@property (weak, nonatomic) id<AEKMegaEditor> megaEditor;

- (BOOL)isImageAlbum;
- (id)localMusicAssetForURL:(id)a0;
- (id)audioEffectService;
- (void)updatePublishModelForDetailMusic:(id)a0;
- (void)fetchMusicModelWithCompletion:(id /* block */)a0;
- (void)downloadMusicIfneedWithCompletion:(id /* block */)a0;
- (void)replaceAudioForImage:(id)a0 completeBlock:(id /* block */)a1;
- (void)replaceAudio:(id)a0 completeBlock:(id /* block */)a1;
- (void)clipWithRange:(struct _HTSAudioRange { double x0; double x1; })a0 repeatCount:(long long)a1;
- (void)clearMusicConfigAssembler;
- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;
- (void)setup;

@end

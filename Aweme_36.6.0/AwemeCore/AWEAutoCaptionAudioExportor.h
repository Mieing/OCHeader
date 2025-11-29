@class AWEVideoPublishViewModel, NSArray, NSString, ACCAudioExport, NSObject, VEAudioResampler;
@protocol ACCEditVideoDataProtocol;

@interface AWEAutoCaptionAudioExportor : NSObject <ACCAutoCaptionAudioExporterProtocol>

@property (retain, nonatomic) VEAudioResampler *audioResampler;
@property (retain, nonatomic) ACCAudioExport *audioExport;
@property (retain, nonatomic) NSObject<ACCEditVideoDataProtocol> *videoData;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (copy, nonatomic) NSArray *audioHandlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPublishModel:(id)a0;
- (void)exportAudioWithVideoData:(id)a0 completion:(id /* block */)a1;
- (id)prepareVideoDataForExport;
- (void)exportVoiceAudioWithCompletion:(id /* block */)a0;
- (void)exportMusicAudioWithCompletion:(id /* block */)a0;
- (void)exportAudioWithCompletion:(id /* block */)a0;
- (id)generateHandlers:(id)a0;
- (void)processExportResult:(id)a0 error:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end

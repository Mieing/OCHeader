@class NSArray, NSString, ACCAudioExport, VEAudioResampler, NSObject;
@protocol ACCEditVideoDataProtocol;

@interface ACCAECaptionAudioExportor : NSObject <ACCAutoCaptionAudioExporterProtocol>

@property (retain, nonatomic) VEAudioResampler *audioResampler;
@property (retain, nonatomic) ACCAudioExport *audioExport;
@property (copy, nonatomic) NSArray *audioHandlers;
@property (retain, nonatomic) NSString *draftFolderPath;
@property (weak, nonatomic) NSObject<ACCEditVideoDataProtocol> *editingVideoData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)exportAudioWithVideoData:(id)a0 completion:(id /* block */)a1;
- (id)generateHandlers;
- (id)prepareVideoDataForExport;
- (void)exportVoiceAudioWithCompletion:(id /* block */)a0;
- (void)exportMusicAudioWithCompletion:(id /* block */)a0;
- (void)exportAudioWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end

@class NSString, HTSAudioExport, NLEAudioSession;

@interface ACCAudioExport : NSObject

@property (retain, nonatomic) HTSAudioExport *veAudioExport;
@property (retain, nonatomic) NLEAudioSession *nleAudioSession;
@property (copy, nonatomic) NSString *audioExportDir;

- (void)cancelAudioExport;
- (void)exportAllAudioSoundInVideoData:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end

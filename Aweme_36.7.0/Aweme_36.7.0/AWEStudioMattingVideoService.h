@class ACCAudioExport, AWEStudioVideoMattingSession, NSString;

@interface AWEStudioMattingVideoService : NSObject <AWEStudioVideoMattingProtocol>

@property (retain, nonatomic) AWEStudioVideoMattingSession *mattingSession;
@property (retain, nonatomic) ACCAudioExport *audioExporter;
@property (nonatomic) long long mattingStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancelCurrentMattingExport;
- (id)updateMattingModelWithSticker:(id)a0 videoPath:(id)a1;
- (void)mattingVideoFragmentWithPath:(id)a0 effectModel:(id)a1 completion:(id /* block */)a2;
- (void)exportAudioSoundWithPath:(id)a0 videoData:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end

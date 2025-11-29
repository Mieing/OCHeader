@class NSURL, IESLiveVideoGiftAudioDecoder, IESLiveVideoGiftMetalConfiguration;
@protocol IESLiveVideoGiftBPEAProtocol;

@interface IESLiveVideoGiftAudioVoice : NSObject {
    IESLiveVideoGiftAudioDecoder *_decoder;
    struct OpaqueAUGraph { } *_auGraph;
    int _convertNode;
    int _ioNode;
    int _mixerNode;
    struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } _outputFormat;
    struct OpaqueAudioComponentInstance { } *_convertUnit;
    struct OpaqueAudioComponentInstance { } *_ioUnit;
    struct OpaqueAudioComponentInstance { } *_mixerUnit;
    NSURL *_sourceURL;
    id /* block */ _processError;
    id<IESLiveVideoGiftBPEAProtocol> _bpeaHandler;
    IESLiveVideoGiftMetalConfiguration *_configuration;
}

- (BOOL)isAudioGraphRunning;
- (BOOL)isAudioGraphInitialized;
- (BOOL)isAudioGraphOpen;
- (void)configBPEAHandler;
- (void)configOutputAudioFormat;
- (BOOL)setupConvertUnit:(id *)a0;
- (BOOL)setupMixerUnit:(id *)a0;
- (BOOL)setupIOUnit:(id *)a0;
- (BOOL)connectAudioUnits:(id *)a0;
- (id)initWithDecoder:(id)a0 configuration:(id)a1 processError:(id /* block */)a2;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)stop;
- (void)setVolume:(double)a0;
- (void)seekToTime:(double)a0;
- (void)dealloc;
- (BOOL)setup:(id *)a0;

@end

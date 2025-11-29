@class IESAudioConverter, NSObject, NSURL, NSMutableData, NSMutableArray, IESAudioVolumConvertConfig;
@protocol OS_dispatch_queue;

@interface IESAudioVolumConvert : NSObject {
    struct WaveformVisualizer { unsigned long long x0; unsigned char x1; } *_waveform;
    NSMutableArray *_volumesArray;
    NSMutableData *_volumesData;
    unsigned long long _volumeWidth;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) IESAudioConverter *musicConverter;
@property (nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } absd;
@property (retain, nonatomic) NSURL *musicURL;
@property (nonatomic) long long waveformType;
@property (nonatomic) double waveformduration;
@property (nonatomic) unsigned long long wavePointsCount;
@property (nonatomic) BOOL optAlgorithm;
@property (retain, nonatomic) IESAudioVolumConvertConfig *config;
@property (nonatomic) BOOL enableWaveformDataExtractOpt;

- (id)getVolumePoints;
- (void)startProcess;
- (int)decryptVideo:(id)a0 dstPath:(id)a1;
- (void)convertNewFile2:(id)a0;
- (void)copyToBufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0 dstOffset:(long long)a1 srcBufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a2 srcOffset:(long long)a3 copyFrams:(long long)a4;
- (id)p_createAVReaderAudioOutput:(id)a0;
- (void)waveFormProcess:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0 maxFrameCount:(long long)a1;
- (void)p_enqueueToProcessBuffer:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0 fromDecodeBuffer:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a1 DecodeSampleNumber:(unsigned int)a2 fullBufferHandler:(id /* block */)a3;
- (void)convertNewFile3:(id)a0;
- (void)asyncExecuteBlock:(id /* block */)a0 callback:(id /* block */)a1;
- (void)fetchVolumsArrayFromData;
- (void)waveFormProcess:(float *)a0 processSamples:(long long)a1 maxFrameCount:(long long)a2;
- (BOOL)p_isVideoType:(id)a0;
- (void)getVolumeDataAsync:(id /* block */)a0;
- (void)getVolumePointsAsync:(id /* block */)a0;
- (id)getVolumeData;
- (void)convertNewFile:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)dealloc;

@end

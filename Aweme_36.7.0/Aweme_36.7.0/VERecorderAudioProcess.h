@class VEAudioInputUnit, NSMutableDictionary, NSString, VEAudioOutputUnit, NSObject;
@protocol VEAudioPlayerProtocol, OS_dispatch_queue;

@interface VERecorderAudioProcess : IESMMObject

@property (retain, nonatomic) VEAudioOutputUnit *timeAlignOutputUnit;
@property (retain, nonatomic) VEAudioOutputUnit *bgmOutputUnit;
@property (retain, nonatomic) VEAudioOutputUnit *micOutputUnit;
@property (retain, nonatomic) VEAudioInputUnit *bgmInputUnit;
@property (retain, nonatomic) VEAudioInputUnit *micInputUnit;
@property (retain, nonatomic) NSMutableDictionary *processUnits;
@property (nonatomic) float loudness_results;
@property (nonatomic) float peak_results;
@property (nonatomic) float timeAlign;
@property (nonatomic) float syncInputCount;
@property (retain, nonatomic) id<VEAudioPlayerProtocol> audioQueueUnit;
@property (nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } asbd;
@property (nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } bgmAsbd;
@property (nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } micAsbd;
@property (nonatomic) BOOL needNullMicData;
@property (nonatomic) BOOL needNullBgmData;
@property (nonatomic) BOOL needWriteFile;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processBgmQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processMicQueue;
@property (nonatomic) BOOL enableBalance;
@property (nonatomic) BOOL enableNewBalance;
@property (nonatomic) float target_lufs;
@property (nonatomic) BOOL enableAEC;
@property (nonatomic) BOOL enableNewAEC;
@property (retain, nonatomic) NSString *aecModelPath;
@property (nonatomic) BOOL enableTimeAlign;
@property (retain, nonatomic) NSString *timeAlignModelPath;
@property (nonatomic) long long backendMode;
@property (copy, nonatomic) id /* block */ timeAlignCallback;
@property (copy, nonatomic) id /* block */ newBalanceCallback;
@property (copy, nonatomic) id /* block */ syncStatusCallBack;
@property (copy, nonatomic) id /* block */ fileResultCallBack;
@property (nonatomic) BOOL hasMic;
@property (nonatomic) BOOL hasBGM;
@property (nonatomic) BOOL useOutput;
@property (nonatomic) BOOL isProcessing;
@property (nonatomic) BOOL isNeedWaitBgm;
@property (nonatomic) BOOL needProcessData;

+ (id)aecModelName;
+ (id)aecModelrequeirements;

- (void)setupAudioQueue;
- (void)stopProcessor:(BOOL)a0;
- (id)p_createSyncUnit:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a0 mic:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a1 bgm:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a2 targetSampleCount:(long long)a3;
- (id)p_createTimeAlignUnit:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a0;
- (id)p_createNewAECUnit:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a0;
- (id)p_createNewBlanceUnit:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a0;
- (id)p_createBackendUnit:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a0;
- (BOOL)p_micNeedOutput;
- (void)p_checkInputAndOutput;
- (void)setFirstVideoTime:(double)a0 firstAudioTime:(double)a1;
- (void)p_releaseAudioPlayer;
- (void)p_createAudioPlayer;
- (void)getBgmData:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0 useForProcessPlaying:(BOOL)a1;
- (void)reconnectUnits:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a0 mic:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a1 bgm:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a2 completion:(id /* block */)a3;
- (id)p_createAECUnit:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a0;
- (void)processMic:(struct opaqueCMSampleBuffer { } *)a0;
- (void)processBgm:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0;
- (void)startProcessor:(BOOL)a0;
- (float)getTimeAlignValue;
- (void)checkAsbd:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a0 mic:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

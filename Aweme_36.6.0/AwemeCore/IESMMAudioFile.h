@class AVMutableComposition, AVAssetReader, NSError, AVAssetReaderOutput, NSObject;
@protocol OS_dispatch_queue;

@interface IESMMAudioFile : NSObject

@property (retain, nonatomic) NSError *error;
@property (readonly, nonatomic) AVMutableComposition *srcAsset;
@property (nonatomic) BOOL hasAudio;
@property (nonatomic) unsigned long long processAudioStatus;
@property (retain, nonatomic) AVAssetReaderOutput *audioOutput;
@property (retain, nonatomic) AVAssetReader *audioReaderProcess;
@property (copy, nonatomic) id /* block */ audioReadyCallback;
@property (nonatomic) BOOL audioEncodingIsFinished;
@property (copy, nonatomic) id /* block */ audioPreProcessBlock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *preProcessQue;
@property (nonatomic) int audioChannel;
@property (nonatomic) int audioSampleRate;

+ (id)createAudioReader:(id)a0;

- (id)initWithAVAsset:(id)a0 inOutputSetting:(id)a1;
- (void)setAudioReaderCallback;
- (id)getReaderError;
- (struct opaqueCMSampleBuffer { } *)processAndReadSample:(id /* block */)a0;
- (BOOL)startProcess:(struct opaqueCMSampleBuffer { } *)a0 inBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (struct opaqueCMSampleBuffer { } *)copyNextSampleBuffer;
- (BOOL)startReader;
- (void)stopReader;

@end

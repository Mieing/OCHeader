@class VEAudioConfig, NSString, VEAudioFilter, HTSVideoData, NSDictionary, VEAudioReader, VEAudioReaderUnit, AVAsset;

@interface VEAudioDetector : IESMMObject

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) id params;
@property (retain, nonatomic) NSDictionary *metadataDict;
@property (retain, nonatomic) VEAudioReader *audioReader;
@property (retain, nonatomic) VEAudioReaderUnit *audioReaderUnit;
@property (retain, nonatomic) VEAudioConfig *audioConfig;
@property (nonatomic) struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *audioBufferCache;
@property (retain, nonatomic) VEAudioFilter *detector;
@property (copy, nonatomic) NSString *audioPath;
@property (retain, nonatomic) AVAsset *audioAsset;
@property (retain, nonatomic) HTSVideoData *videoData;
@property (nonatomic) BOOL isProcessing;
@property (nonatomic) BOOL breakFlag;
@property (nonatomic) BOOL useReaderUnit;
@property (nonatomic) BOOL algoFailed;
@property (copy, nonatomic) id /* block */ progressCallback;

- (void)startDetect;
- (id)jsonStringWithDictionary:(id)a0;
- (id)initWithVideoData:(id)a0;
- (BOOL)initAudioConfig;
- (void)readAudioDataAndProcess;
- (void)cancelDetect;
- (unsigned int)filterProcess:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0;
- (id)initWithPath:(id)a0 withType:(unsigned long long)a1 params:(id)a2;
- (id)initWithVideoData:(id)a0 withType:(unsigned long long)a1 params:(id)a2;
- (void)startDetect_Async;
- (void)cancelDetect_Async;
- (id)dictionaryWithJsonString:(id)a0;
- (id)initWithPath:(id)a0;
- (void).cxx_destruct;
- (id)fetchResult;
- (void)dealloc;

@end

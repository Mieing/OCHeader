@class NSString, LZAudioDataDownloader, NSDictionary;
@protocol KSAudioFileProtocol, KSAudioPlayerUserDefineProtocol;

@interface KSRemoteAudioDataProvider : KSAudioDataProvider <LZAudioDataDownloadDelegate> {
    long long _bytesParesd;
    unsigned int _parsingFlag;
    long long _parsingCnt;
}

@property (readonly, nonatomic) id<KSAudioPlayerUserDefineProtocol> userProtocol;
@property (nonatomic) BOOL bReadyToParsing;
@property (retain, nonatomic) LZAudioDataDownloader *headerDownloader;
@property (nonatomic) long long headLastPos;
@property (retain, nonatomic) LZAudioDataDownloader *tailDownloader;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } tailDataRange;
@property (weak, nonatomic) id<KSAudioFileProtocol> audioFile;
@property (retain, nonatomic) NSString *audioFileExt;
@property (nonatomic) BOOL closed;
@property (nonatomic) BOOL bPaused;
@property (nonatomic) unsigned int retryCnt;
@property (nonatomic) unsigned int maxRetryCnt;
@property (retain, nonatomic) NSString *lastdownLoadUrl;
@property (nonatomic) double lastDownloadSpeed;
@property (nonatomic) double lastDownloadCost;
@property (retain, nonatomic) NSDictionary *lastDownloadDetailInfo;
@property (nonatomic) unsigned long long cacheStatus;
@property (nonatomic) long long lastReadingPos;
@property (nonatomic) BOOL enableLimitNet;
@property (nonatomic) BOOL orgEnableLimitSetting;
@property (nonatomic) unsigned int firstLimitTime;
@property (nonatomic) unsigned int triggleTime;
@property (nonatomic) unsigned int downloadTime;
@property (nonatomic) BOOL bFirstLimitPart;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSongInfo:(id)a0 queue:(id)a1 context:(void *)a2 downloadProtocol:(id)a3;
- (void)dealloc;
- (id)audioFileExtension;
- (long long)fileCachingLength:(long long *)a0;
- (BOOL)isReady;
- (BOOL)readFileData:(long long)a0 len:(long long)a1 data:(id *)a2 isEof:(BOOL *)a3;
- (BOOL)canReadData:(long long)a0 len:(long long)a1 err:(id *)a2;
- (BOOL)prepareAudioData;
- (void)prepareSeekingData:(long long)a0;
- (void)prepareTailData:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)prepareBufferData;
- (void)pauseDownloadData;
- (void)resumeDownloadData;
- (void)close:(BOOL)a0;
- (id)buildDownloadProtocol;
- (void)notifyAudioFileAlreadFinished;
- (void)tryParsingAudioInfo;
- (void)startDownload:(id)a0 range:(struct _LzRange { unsigned long long x0; unsigned long long x1; })a1 retryCnt:(unsigned int)a2;
- (void)retryDownloadData:(id)a0;
- (void)setAudioFileToPlay;
- (void)judgeLimitDownload:(long long)a0 addtionLen:(long long)a1;
- (void)startLimitDownload:(long long)a0;
- (void)onAudioTask:(id)a0 finish:(id)a1;
- (void)onAudioTask:(id)a0 error:(id)a1;
- (void)onAudioTask:(id)a0 receivedData:(id)a1;
- (void)onAudioTask:(id)a0 receivedHeader:(id)a1;
- (BOOL)isDataCorruption:(id)a0;
- (void).cxx_destruct;

@end

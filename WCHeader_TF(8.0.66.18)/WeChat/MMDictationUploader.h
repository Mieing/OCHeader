@class NSString, MMTimer, NSData, OrderedDictionary;
@protocol MMDictationUploaderDelegate;

@interface MMDictationUploader : NSObject <PBMessageObserverDelegate>

@property (nonatomic) long long scene;
@property (copy, nonatomic) NSString *voiceId;
@property (nonatomic) unsigned int currentSeq;
@property (retain, nonatomic) OrderedDictionary *waitingPackets;
@property (retain, nonatomic) OrderedDictionary *uploadingPackets;
@property (retain, nonatomic) MMTimer *dequeueTimer;
@property (nonatomic) BOOL isStopped;
@property (nonatomic) unsigned int maxPacketSize;
@property (nonatomic) unsigned int uploadIntervalMs;
@property (nonatomic) unsigned int cgiTotalTimeOut;
@property (nonatomic) unsigned int cgiRetryCount;
@property (retain, nonatomic) NSData *lastBuffer;
@property (copy, nonatomic) NSData *extraData;
@property (weak, nonatomic) id<MMDictationUploaderDelegate> delegate;

- (id)initWithScene:(long long)a0 voiceId:(id)a1;
- (id)lastWaitingPacket;
- (id)firstWaitingPacket;
- (void)sendPingPacket;
- (void)addVoicePacket:(id)a0;
- (void)stopUpload;
- (void)_stopUpload;
- (void)startTimer;
- (void)stopTimer;
- (void)_internalStop;
- (id)_buildRequest:(id)a0 seq:(unsigned int)a1;
- (void)dequeuePacket;
- (void)removePacketFromUploadingQueue:(unsigned int)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)onFail:(long long)a0 ret:(long long)a1 isResposeEmpty:(BOOL)a2;
- (void)onSucceedResponse:(id)a0 seq:(int)a1;
- (void).cxx_destruct;

@end

@class LiveStreamMultiTimerManager;

@interface LSAlgorithmInfoHelper : NSObject {
    struct unique_ptr<avframework::SEIPayloadProcessor, std::default_delete<avframework::SEIPayloadProcessor>> { struct __compressed_pair<avframework::SEIPayloadProcessor *, std::default_delete<avframework::SEIPayloadProcessor>> { struct SEIPayloadProcessor *__value_; } __ptr_; } processor;
}

@property (copy, nonatomic) id /* block */ algorithmSEIReadyBlock;
@property (copy, nonatomic) id /* block */ algorithmSEIReadyStringBlock;
@property (copy, nonatomic) id /* block */ algorithmInfoChangeBlock;
@property (nonatomic) long long seiTimerInterval;
@property (retain, nonatomic) LiveStreamMultiTimerManager *seiTimer;

- (void)needSendSei;
- (void)dumpSeiPayload;
- (void)writeSeiHeader:(id)a0;
- (void)writeSeiTagExtra:(id)a0;
- (void)writeHeaderSwitchChanged:(int)a0;
- (id)getRawData;
- (long long)getDataLength;
- (void)loadSeiPayload;
- (void)writeSeiTag:(long long)a0 withDic:(id)a1;
- (void)writeHeaderMixStream:(int)a0;
- (void)stopTimer;
- (void).cxx_destruct;
- (void)startTimer;
- (id)init;
- (id).cxx_construct;
- (void)dealloc;

@end

@class NSMutableData;

@interface MMGameAudioMixStream : NSObject {
    int _streamId;
    BOOL _buffReady;
    unsigned int _readySize;
    unsigned int _maxSize;
    NSMutableData *_nsData;
    NSMutableData *_buffData;
    unsigned int putTimes;
    unsigned int putSize;
    unsigned int getTimes;
    unsigned int getSize;
    unsigned int ignoreTimes;
    unsigned int ignoreSize;
}

@property (nonatomic) int sessionId;
@property (nonatomic) unsigned int size;
@property (nonatomic) int channel;
@property (nonatomic) int samplerate;
@property (nonatomic) long long format;

- (id)init:(int)a0 channel:(int)a1 samplerate:(int)a2 format:(long long)a3 size:(int)a4;
- (BOOL)putData:(int)a0 samplerate:(int)a1 format:(long long)a2 data:(void *)a3 size:(unsigned int)a4;
- (id)getData;
- (void).cxx_destruct;

@end

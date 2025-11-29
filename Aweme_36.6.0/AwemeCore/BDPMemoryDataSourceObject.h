@class NSString, NSData, BDPThreadSafeArray, NSNumber, NSFileHandle;
@protocol BDPStreamAudioPlayerStateDelegate;

@interface BDPMemoryDataSourceObject : NSObject {
    int current_header_pos;
    NSData *mfileData;
    unsigned int pcm_length;
    NSFileHandle *fileHandler;
}

@property (retain, nonatomic) BDPThreadSafeArray *bufferQueue;
@property (retain, nonatomic) NSData *currentData;
@property (nonatomic) long long currentPosition;
@property (retain, nonatomic) NSString *taskID;
@property (weak, nonatomic) id<BDPStreamAudioPlayerStateDelegate> delegate;
@property (nonatomic) BOOL waiting;
@property (retain, nonatomic) NSNumber *numOfChannels;
@property (retain, nonatomic) NSNumber *sampleBit;
@property (retain, nonatomic) NSNumber *sampleRate;
@property (nonatomic) BOOL isFinish;

- (int)getMDSVersion;
- (long long)getSize:(int)a0;
- (int)readAt:(int)a0 position:(long long)a1 buffer:(const char *)a2 offset:(int)a3 size:(int)a4;
- (id)getFilePath;
- (void)p_stateChange:(long long)a0 data:(id)a1;
- (id)initWithTaskID:(id)a0 channels:(id)a1 bit:(id)a2 rate:(id)a3 delegate:(id)a4;
- (void).cxx_destruct;
- (int)close:(int)a0;
- (id)init;
- (int)open:(id)a0;
- (BOOL)addBuffer:(id)a0;
- (id)initWithTaskID:(id)a0;

@end

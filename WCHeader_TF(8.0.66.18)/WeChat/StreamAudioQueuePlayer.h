@class NSString, NSMutableArray;
@protocol StreamAudioCodecProtocol, StreamAudioPlayerDelegate;

@interface StreamAudioQueuePlayer : AudioQueuePlayer {
    BOOL mAppendDataEnd;
    NSMutableArray *mEmptyBuffers;
}

@property (retain, nonatomic) NSString *filePath;
@property (retain, nonatomic) id<StreamAudioCodecProtocol> codec;
@property (weak, nonatomic) id<StreamAudioPlayerDelegate> delegate;

- (id)init;
- (BOOL)preparePlayWithFile:(id)a0;
- (void)playAtTime:(unsigned int)a0;
- (void)appendData:(id)a0 endFlag:(BOOL)a1;
- (void)fillEmptyBufferIfNeed;
- (int)getCodecTypeFromVoiceFormat:(long long)a0;
- (BOOL)initAudioQueue;
- (void).cxx_destruct;

@end

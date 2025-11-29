@class NSMutableData, NSLock, AWESearchAIGCVoiceBroadcastPlayerConfig;
@protocol AWESearchAIGCVoiceBroadcastPlayerDelegate;

@interface AWESearchAIGCVoiceBroadcastPlayer : NSObject

@property (retain, nonatomic) AWESearchAIGCVoiceBroadcastPlayerConfig *config;
@property (weak, nonatomic) id<AWESearchAIGCVoiceBroadcastPlayerDelegate> delegate;
@property (nonatomic) long long playStatus;
@property (nonatomic) struct OpaqueAudioComponentInstance { } *audioUnit;
@property (retain, nonatomic) NSMutableData *bufferData;
@property (retain, nonatomic) NSLock *audioBufferSafeLock;

- (void)stopAudioPlay;
- (void)startAudioPlay;
- (void)appendAudioPCMData:(id)a0;
- (void)safeClearAudioBuffer;
- (void)safeAppendAudioBuffer:(id)a0;
- (BOOL)setAudioPlaybackRate:(float)a0;
- (id)safeRangeAudioBufferWithSize:(long long)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithConfig:(id)a0 delegate:(id)a1;

@end

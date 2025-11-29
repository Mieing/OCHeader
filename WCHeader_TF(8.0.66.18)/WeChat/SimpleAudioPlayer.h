@class SimpleAudioState;

@interface SimpleAudioPlayer : NSObject

@property (retain, nonatomic) SimpleAudioState *m_bufferState;
@property (nonatomic) BOOL m_hasPrepare;
@property (nonatomic) float m_volume;

+ (void)sprintRetCode:(int)a0;

- (void)dealloc;
- (id)init;
- (id)getState;
- (BOOL)updateDataFormat;
- (void)clearQueue;
- (BOOL)updateQueue;
- (void)clearBuffer;
- (BOOL)updateBuffer;
- (BOOL)audioQueueStart;
- (BOOL)audioQueueStop;
- (BOOL)preparePlay;
- (BOOL)play;
- (void)stop;
- (void)printRetCode:(int)a0;
- (void).cxx_destruct;

@end

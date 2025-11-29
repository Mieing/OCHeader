@class MMContext, NSRecursiveLock;
@protocol SimpleAudioBufferDelegate;

@interface SimpleAudioState : NSObject

@property (nonatomic) BOOL m_isPlaying;
@property (nonatomic) BOOL m_running;
@property (nonatomic) unsigned int m_bufferByteSize;
@property (nonatomic) unsigned int m_numPacketsToRead;
@property (nonatomic) struct OpaqueAudioQueue { } *m_queue;
@property (nonatomic) struct AudioQueueBuffer **m_buffers;
@property (nonatomic) struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *m_dataFormat;
@property (weak, nonatomic) id<SimpleAudioBufferDelegate> m_delegate;
@property (retain, nonatomic) NSRecursiveLock *m_dataLock;
@property (retain, nonatomic) MMContext *m_context;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end

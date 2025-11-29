@class NSMutableDictionary;
@protocol DDanmakuDispatcherDelegate, DDanmakuDispatcherDataSource;

@interface DDanmakuDispatcher : NSObject

@property (retain, nonatomic) NSMutableDictionary *pendingNormalDanmakuBuffer;
@property (retain, nonatomic) NSMutableDictionary *pendingHighPriorityDanmakuBuffer;
@property (weak, nonatomic) id<DDanmakuDispatcherDelegate> delegate;
@property (weak, nonatomic) id<DDanmakuDispatcherDataSource> dataSource;
@property (nonatomic) long long maxBufferLength;

- (void)clearAllBuffers;
- (void)initBuffuer;
- (void)appendDanmakus:(id)a0 to:(id)a1;
- (void)removeExpiredDanmakusInBufferByTime:(double)a0;
- (void)sortBuffer;
- (void)tailedToBufferLength;
- (void)dispatchDanmakus;
- (void)notifyDroppedDanmakus:(id)a0;
- (void)dispatchDanmakusInBuffer:(id)a0;
- (void)insertDanmakuToHighPriorityBuffer:(id)a0;
- (void)timeUpdated:(double)a0;
- (void).cxx_destruct;
- (id)init;

@end

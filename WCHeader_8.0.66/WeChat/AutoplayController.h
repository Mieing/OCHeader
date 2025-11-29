@class NSMutableArray, CMessageWrap;
@protocol AutoplayControllerDelegate;

@interface AutoplayController : MMObject <IAudioReceiverExt> {
    NSMutableArray *m_arrMessageArray;
}

@property (retain, nonatomic) CMessageWrap *currentPlayingMsg;
@property (weak, nonatomic) id<AutoplayControllerDelegate> delegate;
@property (readonly, nonatomic) BOOL autoPlayEnabled;
@property (nonatomic) BOOL paused;

+ (id)generateWithMsg:(id)a0 delegate:(id)a1;

- (id)initWithMsg:(id)a0 delegate:(id)a1;
- (void)PlayList;
- (void)tryLoadMoreMsgFromID:(unsigned int)a0;
- (void)OnEndPlaying:(id)a0 isForceStop:(BOOL)a1;
- (void).cxx_destruct;

@end

@interface TingPlatformStreamPlayerStateMachine : NSObject

@property (nonatomic) unsigned long long mPreState;
@property (nonatomic) unsigned long long mState;
@property (nonatomic) BOOL mHasDequeueBuffer;
@property (nonatomic) BOOL mHasNotifyStarted;

- (id)init;
- (void)reset;
- (int)getPlayerStatus;
- (int)doOp:(unsigned long long)a0;

@end

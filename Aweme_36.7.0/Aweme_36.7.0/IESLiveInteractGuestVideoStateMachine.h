@class NSMutableArray, IESLiveInteractGuestVideoStateMachineConfig;
@protocol IESLiveInteractGuestVideoStateMachineDelegate;

@interface IESLiveInteractGuestVideoStateMachine : NSObject

@property (retain, nonatomic) NSMutableArray *operationQueue;
@property (nonatomic) unsigned long long currentState;
@property (nonatomic) unsigned long long startFromState;
@property (nonatomic) unsigned long long closeReason;
@property (nonatomic) BOOL shouldShowToastWhenBack;
@property (nonatomic) unsigned long long cameraStatus;
@property (weak, nonatomic) id<IESLiveInteractGuestVideoStateMachineDelegate> delegate;
@property (retain, nonatomic) IESLiveInteractGuestVideoStateMachineConfig *config;
@property (nonatomic) unsigned long long openScene;

- (void)startOperateIfNeededWithNewNode:(id)a0;
- (void)p_startOperation;
- (void)finishLatestOperation;
- (void)closeVideoCaptureWithState:(unsigned long long)a0 withAPIRequest:(BOOL)a1;
- (void)startVideoCaptureWithState:(unsigned long long)a0 withAPIRequest:(BOOL)a1;
- (void)p_realCloseWithState:(unsigned long long)a0 noAPIRequest:(BOOL)a1 asyncAPIRequest:(BOOL)a2;
- (void)p_realStartWithState:(unsigned long long)a0 noAPIRequest:(BOOL)a1;
- (void)notificationIfNeededWithCameraStatus:(unsigned long long)a0;
- (void)initiallyOpen;
- (void)closeVideoCaptureWithState:(unsigned long long)a0;
- (void)closeVideoCaptureWithState:(unsigned long long)a0 asyncAPIRequest:(BOOL)a1;
- (void)startVideoCaptureWithState:(unsigned long long)a0;
- (void)showToast:(id)a0;
- (void).cxx_destruct;

@end

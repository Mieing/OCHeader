@class NSString, IESGCPTimer;

@interface IESGCPCGBlackFrameMonitorService : NSObject <IESGCPCGInstanceActions, IESGCPDIContextSubscriber>

@property (retain, nonatomic) IESGCPTimer *timer;
@property (nonatomic, getter=isDetectedBlackFrame) BOOL detectedBlackFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetGameCPDIContext;
- (void)playInstance:(id)a0 playStatusDidUpdated:(long long)a1 info:(id)a2;
- (void)_stopCheckingTimer;
- (void)_startMonitorWithXPlayItem:(id)a0;
- (BOOL)_isBlackFrameWithType:(long long)a0;
- (void)_didDetectedBlackFrame;
- (void).cxx_destruct;
- (void)dealloc;

@end

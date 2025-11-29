@class IESGCPXPlayGameAPI, NSString, IESGCPTimer;

@interface IESGCPPeakStatusService : NSObject <IESGCPCGInstanceActions, IESGCPDIContextSubscriber>

@property (nonatomic, getter=isPeakTime) BOOL peakTime;
@property (nonatomic) long long nextQueryInterval;
@property (retain, nonatomic) IESGCPXPlayGameAPI *cgAPI;
@property (retain, nonatomic) IESGCPTimer *timer;
@property (copy, nonatomic) NSString *productId;
@property (copy, nonatomic) NSString *planId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetGameCPDIContext;
- (void)playInstanceOnFirstFrameReceived:(id)a0 info:(id)a1;
- (void)playInstance:(id)a0 preloadResult:(BOOL)a1 info:(id)a2;
- (void)pollingPeakStatus;
- (id)createReq;
- (void).cxx_destruct;
- (void)_stopTimer;
- (id)init;
- (void)dealloc;
- (void)_startTimer;

@end

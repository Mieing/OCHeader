@class NSLock, NSMutableDictionary, NSString;
@protocol IESLiveRealStreamingProvider;

@interface IESLiveInteractionAudioReportServiceImpl : NSObject <IESLiveInteractionLinkerServiceAction, IESLiveInteractionAudioReportService>

@property (retain, nonatomic) NSMutableDictionary *audioAEDReportObserverDict;
@property long long audioAEDReportObserverRefCount;
@property (retain, nonatomic) NSLock *audioAEDReportLock;
@property (weak, nonatomic) id<IESLiveRealStreamingProvider> streamProvider;
@property (nonatomic) BOOL hasEnableAudioAEDReport;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)onAudioAEDStateUpdate:(int)a0;
- (void)interactionLinkerServiceInteractDidEnd:(id)a0 error:(id)a1;
- (void)registerAudioAEDReport:(id /* block */)a0 intervalMS:(int)a1 businessType:(unsigned long long)a2;
- (void)unregisterAudioAEDReportWithBusinessType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;

@end

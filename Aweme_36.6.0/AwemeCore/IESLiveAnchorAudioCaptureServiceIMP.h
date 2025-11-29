@class NSString, NSHashTable, LiveCore, NSObject;
@protocol OS_dispatch_queue;

@interface IESLiveAnchorAudioCaptureServiceIMP : NSObject <IESLiveAnchorAudioCaptureService>

@property (retain, nonatomic) LiveCore *liveCore;
@property (nonatomic) BOOL hasSetCallback;
@property (retain, nonatomic) NSHashTable *listenersMap;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *audioDispatchQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)initWithLiveCore:(id)a0;
- (void)removeListener:(id)a0;
- (void).cxx_destruct;
- (void)addListener:(id)a0;

@end

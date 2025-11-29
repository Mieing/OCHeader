@class NSString, AWEBDUploadClientService, AWEBDUploadRoutClientDelegate, AWEVideoUploadSpeedModel, NSObject;
@protocol OS_dispatch_queue;

@interface AWEUploadSpeedProbeManager : NSObject <BDFileSpeedTestClientDelegate, ACCSpeedProbeProtocol>

@property (retain, nonatomic) AWEVideoUploadSpeedModel *speedInfo;
@property (nonatomic) BOOL probeState;
@property (nonatomic) unsigned long long mode;
@property (copy, nonatomic) NSString *probeContext;
@property (nonatomic) long long probeSpeed;
@property (retain, nonatomic) AWEBDUploadClientService *BDUploadService;
@property (retain, nonatomic) AWEBDUploadRoutClientDelegate *routDelegate;
@property (nonatomic) double lastTimestamp;
@property (nonatomic) BOOL running;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)manager;

- (void)uploadVideo:(id)a0 speed:(int)a1 videoContext:(id)a2 error:(id)a3;
- (long long)speedTestGetNetState:(id)a0;
- (BOOL)dataValid;
- (void)configVideoUploadClient:(id)a0;
- (void)_stopIfNeed;
- (void).cxx_destruct;
- (void)invalidateData;
- (id)init;
- (void)startIfNeeded;
- (void)stopIfNeeded;

@end

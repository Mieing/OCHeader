@class AWEVideoPublishViewModel, NSString, NLEMediaRemoteCloud_OC;
@protocol AWECloudCompileTaskDelegate;

@interface AWECloudCompileTask : NSObject <NLEModelExporterDelegate>

@property (retain, nonatomic) NLEMediaRemoteCloud_OC *cloudExporter;
@property (weak, nonatomic) id<AWECloudCompileTaskDelegate> delegate;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onCompileDone:(id)a0;
- (void)onCompileError:(int)a0 ext:(int)a1 f:(float)a2 msg:(id)a3;
- (void)onVeError:(int)a0 ext:(int)a1 f:(float)a2 msg:(id)a3;
- (void)onCompileProgress:(float)a0;
- (void)onCompileStart:(id)a0;
- (void)updateCloudTemplateSyncWithNLEModel:(id)a0;
- (id)initWithPublishModel:(id)a0 delegate:(id)a1;
- (void).cxx_destruct;
- (void)start;
- (void)dealloc;
- (void)cancel;

@end

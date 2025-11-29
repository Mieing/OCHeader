@class NSString;
@protocol KryptonMediaRecorder;

@interface BDPKryptonWKMediaRecorderServiceImpl : NSObject <KryptonMediaRecorderService>

@property (weak, nonatomic) id<KryptonMediaRecorder> recorder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createMediaRecorder;
- (id)initWithRecorder:(id)a0;
- (void).cxx_destruct;

@end

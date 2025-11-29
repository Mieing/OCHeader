@interface NLEMediaRemoteCloud_OC : NSObject

@property (nonatomic) struct shared_ptr<nle::mediaremote::NLEMediaCloudEdit> { struct NLEMediaCloudEdit *__ptr_; struct __shared_weak_count *__cntrl_; } cppRemoteExporter;

+ (id)orderJson:(id)a0;

- (long long)setCompileListener:(id)a0;
- (long long)exportModel:(id)a0 settings:(id)a1 ignoreProgress:(BOOL)a2;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (id)initWithConfig:(id)a0;
- (long long)cancelExport;

@end

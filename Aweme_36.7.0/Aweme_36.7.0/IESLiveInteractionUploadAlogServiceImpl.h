@class NSString;

@interface IESLiveInteractionUploadAlogServiceImpl : NSObject <IESLiveInteractionUploadAlogService>

@property (nonatomic) unsigned long long timeInterval;
@property (nonatomic) unsigned long long duration;
@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL realEnable;
@property (copy, nonatomic) NSString *uniqueId;
@property (copy, nonatomic) id /* block */ enableUpload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)userDidTakeScreenshot:(id)a0;
- (BOOL)checkEnable;
- (void)screenCaptureStatusChanged:(id)a0;
- (void)uploadAlogIfNeeded:(id)a0;
- (void).cxx_destruct;
- (id)initWithObject:(id)a0;
- (void)addObserver;
- (void)dealloc;

@end

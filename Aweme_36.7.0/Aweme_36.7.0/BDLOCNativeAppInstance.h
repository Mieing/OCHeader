@class BDPSchema, NSString, NSDictionary, BDPUniqueID, UIViewController;

@interface BDLOCNativeAppInstance : NSObject <BDLiveOpenContainerInstance>

@property (retain, nonatomic) BDPSchema *schema;
@property (readonly, nonatomic) BDPUniqueID *uniqueID;
@property (readonly, copy, nonatomic) NSString *appID;
@property (weak, nonatomic) UIViewController *containerVC;
@property (readonly, copy, nonatomic) NSString *currentPagePath;
@property (readonly, copy, nonatomic) NSString *currentPageQuery;
@property (readonly, copy, nonatomic) NSDictionary *currentPageQueryDict;
@property (readonly, nonatomic) BOOL isRecording;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissContainerWithCompletion:(id /* block */)a0;
- (void)forceStopRecordingWithAppID:(id)a0 error:(id)a1 extra:(id)a2;
- (void)pauseRecordingWithAppID:(id)a0 extra:(id)a1 completion:(id /* block */)a2;
- (void)resumeRecordingWithAppID:(id)a0 extra:(id)a1 completion:(id /* block */)a2;
- (id)currentPagePath;
- (id)currentPageQuery;
- (id)appID;
- (void).cxx_destruct;
- (BOOL)isRecording;
- (id)initWithSchema:(id)a0;

@end

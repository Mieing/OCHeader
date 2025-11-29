@class NSString, AWELocationModel, NSObject;
@protocol OS_dispatch_source;

@interface AWELocationManager : NSObject <AWEUserMessage> {
    AWELocationModel *_location;
}

@property (retain, nonatomic) NSObject<OS_dispatch_source> *uploadTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showLocationRequestAlertWithResultBlock:(id /* block */)a0 cancelBlock:(id /* block */)a1;
+ (void)updateLocation:(id)a0 completion:(id /* block */)a1;
+ (void)presentLocationPickerWithModel:(id)a0 completion:(id /* block */)a1;
+ (void)hideLocation:(BOOL)a0 completion:(id /* block */)a1;
+ (void)startUploadLocationLoopImp;
+ (id)sharedInstance;
+ (void)updateLocation;

- (void)didFinishLoginWithUid:(id)a0;
- (void)accountPrivacyPolicyAgreeNoti:(id)a0;
- (void)p_checkPrivacyAndUploadDeivceInfo;
- (void)startUploadLocationChecker;
- (void)requestPermission;
- (void)fetchLocations:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

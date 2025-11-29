@class NSLock, NSMutableArray;

@interface AWEIMMixPhotoCameraManager : NSObject

@property (readonly, nonatomic) NSMutableArray *dismissCallbacks;
@property (readonly, nonatomic) NSLock *dismissCallbacksLock;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (id)p_trackParamCharTypeFromChatType:(unsigned long long)a0;
- (void)p_trackCameraShowWithContext:(id)a0;
- (id)p_trackExtForFaceDetectWithContext:(id)a0;
- (id)p_trackExtForCameraWithContext:(id)a0;
- (void)p_onAnyIMCameraDealloc;
- (id)p_repoModelWithShowContext:(id)a0 onSubmit:(id /* block */)a1;
- (void)openIMCameraByNewAPI:(id)a0 onSubmit:(id /* block */)a1 onCompletion:(id /* block */)a2;
- (unsigned long long)p_publishTypeFormActionType:(long long)a0;
- (id)p_dyncmicDocDict;
- (void)p_addDismissCallback:(id /* block */)a0;
- (void)p_dismissFired;
- (void)showIMCameraForMixPhotoWithContext:(id)a0 onSubmit:(id /* block */)a1 onCompletion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

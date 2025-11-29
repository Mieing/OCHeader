@class UIViewController, NSString, NSMutableSet, NSObject, FLTStatusCommonApi;
@protocol FlutterTextureRegistry;

@interface FLTStatusPlugin : NSObject <FLTStatusActionPlatformApi, MMFlutterPlugin>

@property (weak, nonatomic) UIViewController *associateViewController;
@property (retain, nonatomic) NSObject<FlutterTextureRegistry> *flutterTextureRegistery;
@property (retain, nonatomic) FLTStatusCommonApi *commonApi;
@property (retain, nonatomic) NSMutableSet *handlerSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requestFromData:(id)a0 pbClass:(Class)a1;
+ (id)plugin;

- (void)handleRegisterCallbackRequest:(id)a0 completion:(id /* block */)a1;
- (void)handleUnregisterCallbackRequest:(id)a0 completion:(id /* block */)a1;
- (void)handleJumpUserProfilePage:(id)a0 completion:(id /* block */)a1;
- (void)handleJumpSelectStatusPostPage:(id)a0 completion:(id /* block */)a1;
- (void)handleJumpPoiPage:(id)a0 completion:(id /* block */)a1;
- (void)handleShowVisibilityGroupDialog:(id)a0 completion:(id /* block */)a1;
- (void)handleShowLikeListDialog:(id)a0 completion:(id /* block */)a1;
- (void)handleShowCommentDialog:(id)a0 completion:(id /* block */)a1;
- (void)handleOnEnterCardDialogPage:(id)a0 completion:(id /* block */)a1;
- (void)handleOnExitCardDialogPage:(id)a0 completion:(id /* block */)a1;
- (void)handleActionWithCommand:(id)a0 requestData:(id)a1 completion:(id /* block */)a2;
- (id)init;
- (void)dealloc;
- (id)availableNavigationController;
- (void)fltStatusActionRequest:(id)a0 completion:(id /* block */)a1;
- (void)sendCallback:(id)a0 data:(id)a1 completion:(id /* block */)a2;
- (void)onAttachedToEngine:(id)a0;
- (void)onDetachedFromEngine:(id)a0;
- (void)onAttachedToViewController:(id)a0;
- (void)onDetachedToViewController;
- (id)onListenWithArguments:(id)a0 eventSink:(id /* block */)a1;
- (id)onCancelWithArguments:(id)a0;
- (void).cxx_destruct;

@end

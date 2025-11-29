@class NSString, BrandDirectlyOperateContactLogic, FlutterEventChannel, WCFinderDataItem, FLTNewLifeCommonApi, NSObject, NSMutableSet, UIViewController;
@protocol FlutterTextureRegistry;

@interface NewLifePlugin : NSObject <MMImagePickerManagerDelegate, FlutterStreamHandler, FLTFlowListDataAction, MMFlutterPlugin>

@property (weak, nonatomic) UIViewController *associateViewController;
@property (retain, nonatomic) FlutterEventChannel *editPhotosEventChannel;
@property (copy, nonatomic) id /* block */ editPhotosEventSink;
@property (retain, nonatomic) FLTNewLifeCommonApi *commonApi;
@property (retain, nonatomic) NSMutableSet *handlerSet;
@property (retain, nonatomic) NSObject<FlutterTextureRegistry> *flutterTextureRegistery;
@property (retain, nonatomic) WCFinderDataItem *detailLiveDataItem;
@property (retain, nonatomic) BrandDirectlyOperateContactLogic *brandOperateContactLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)handleNewLifeFinderLikeFeed:(id)a0 completion:(id /* block */)a1;
+ (id)requestFromData:(id)a0 pbClass:(Class)a1;
+ (id)plugin;

- (void)handleGetFeedRequest:(id)a0 completion:(id /* block */)a1;
- (void)handleActionWithCommand:(id)a0 requestData:(id)a1 completion:(id /* block */)a2;
- (id)init;
- (void)dealloc;
- (id)availableNavigationController;
- (void)fltNewLifeActionRequest:(id)a0 completion:(id /* block */)a1;
- (void)sendCallback:(id)a0 data:(id)a1 completion:(id /* block */)a2;
- (void)onAttachedToEngine:(id)a0;
- (void)onDetachedFromEngine:(id)a0;
- (void)onAttachedToViewController:(id)a0;
- (void)onDetachedToViewController;
- (id)onListenWithArguments:(id)a0 eventSink:(id /* block */)a1;
- (id)onCancelWithArguments:(id)a0;
- (void).cxx_destruct;

@end

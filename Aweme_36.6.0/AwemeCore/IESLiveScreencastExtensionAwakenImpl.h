@class IESLiveModalDialog, NSString;
@protocol IESLiveScreencastSystemAwakenController;

@interface IESLiveScreencastExtensionAwakenImpl : NSObject <IESScreenshotExtensionAwaken>

@property (retain, nonatomic) id<IESLiveScreencastSystemAwakenController> screencastAwakenController;
@property (retain, nonatomic) IESLiveModalDialog *broadcastDialog;
@property (nonatomic) long long awakenState;
@property (copy, nonatomic) id /* block */ awakenResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)hub;
- (void)bindXLiveObserveActions;
- (void)hookModalTransitionStyleSetting;
- (void)dismissStartViewAndCalledSuccessfulHandlerIfNeed;
- (void)showScreencastLiveView;
- (void)presentSystemRecordPanelIfNeeded;
- (void)showStartAlertViewWithCompletion:(id /* block */)a0;
- (void)broadcastPickerViewDidClosed;
- (void)dismissScreencastLiveViewWithHandle:(id /* block */)a0;
- (id)appSchemeUrl;
- (void)awakenScreenshotExtensionWithResult:(id /* block */)a0;
- (void)awakenScreenshotExtensionCancel;
- (void).cxx_destruct;
- (id)extensionBundleID;
- (id)init;
- (void)applicationDidEnterBackground:(id)a0;
- (void)setup;
- (void)cancel;
- (void)addObservers;
- (void)removeObservers;

@end

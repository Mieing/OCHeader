@class UIView, NSString, DUXContentSheet, AWECodeGenCommonSubscribePopStModel, AWEHPSLOMonitor, MMKV, NSDictionary, AWEMRSubscribePanelRequestModel;
@protocol AWEMRCommonSubscribePanelTaskDelegate;

@interface AWEMRCommonSubscribePanelTask : NSObject <DUXSheetDelegate, AWEAlertProtocol, AWEMRCommonSubscribePanelTask>

@property (retain, nonatomic) AWEMRSubscribePanelRequestModel *model;
@property (copy, nonatomic) id /* block */ completion;
@property BOOL cancelled;
@property (copy, nonatomic) NSString *lastPageIdentifier;
@property (retain, nonatomic) AWECodeGenCommonSubscribePopStModel *popupModel;
@property (retain, nonatomic) AWECodeGenCommonSubscribePopStModel *originPopupModel;
@property (nonatomic) BOOL didTrackClick;
@property (weak, nonatomic) DUXContentSheet *subscribePanel;
@property (weak, nonatomic) DUXContentSheet *infoPanel;
@property (retain, nonatomic) UIView *loadingWindow;
@property (nonatomic) BOOL showLoading;
@property (copy, nonatomic) id /* block */ alertOnClose;
@property (nonatomic) long long subscribeSuccessPopCount;
@property (retain, nonatomic) MMKV *mmkv;
@property (retain, nonatomic) NSDictionary *extraDict;
@property (weak, nonatomic) id<AWEMRCommonSubscribePanelTaskDelegate> delegate;
@property (retain, nonatomic) AWEHPSLOMonitor *monitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)validateMultiCategoryPopupWithModel:(id)a0;
+ (BOOL)validateDoubleChannelPopupWithModel:(id)a0;
+ (BOOL)validateSingleChannelPopupWithModel:(id)a0;

- (void)sheetDidClickMaskArea:(id)a0;
- (void)sheetDidClickCloseButton:(id)a0;
- (void)sheetWillDismiss:(id)a0;
- (void)sheetDidDragToDismiss:(id)a0;
- (id)alertIDForEvent:(id)a0;
- (long long)alertPriorityForEvent:(id)a0;
- (BOOL)canShowWithContext:(id)a0;
- (void)showWithContext:(id)a0 onClose:(id /* block */)a1;
- (void)dismissLoadingView;
- (id)popId;
- (void)showPopup;
- (void)viewControllerTransitionNotification:(id)a0;
- (void)trackPanelShow;
- (void)trackPanelClick;
- (BOOL)validateMultiCategoryPopupWithModel:(id)a0;
- (BOOL)validateDoubleChannelPopupWithModel:(id)a0;
- (BOOL)validateSingleChannelPopupWithModel:(id)a0;
- (id)initWithModel:(id)a0 completion:(id /* block */)a1;
- (id)calculatePageIdentifier;
- (void)cancelAndCallbackWithSubscribeInfo:(id)a0 error:(id)a1;
- (void)tryShowPopupWithModel:(id)a0;
- (void)notifyWithEventName:(id)a0 exitMethod:(id)a1;
- (void)callbackWithSubscribeInfo:(id)a0 error:(id)a1;
- (void)cancelAlert;
- (void)sheetDidClickNegativeButton:(id)a0;
- (void)sheetDidClickPositiveButton:(id)a0 requestModel:(id)a1;
- (void)sheetDidClickKeepSubscribeButton:(id)a0;
- (void)sheetDidClickUnSubscribeButton:(id)a0 requestModel:(id)a1;
- (void)updateSheetFrame:(id)a0 withPanelVC:(id)a1;
- (void)addTransitionNotification;
- (BOOL)isSubscribeSuccessPopLimit;
- (void)sheetDidClickConfirmButton:(id)a0;
- (void)updateSubscribeSuccessPopCount;
- (void)showSubscribeSuccess;
- (void)updatePopModelWithRequestModel:(id)a0;
- (void)notifyEventWithParams:(id)a0;
- (void).cxx_destruct;
- (void)start;
- (void)dealloc;
- (void)setup;
- (void)cancel;
- (void)cancelTask;
- (void)showLoadingView;

@end

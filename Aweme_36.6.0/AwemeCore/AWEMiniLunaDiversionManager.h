@class AWELunaUgPopView, NSDictionary, NSString, DUXBottomNotification;

@interface AWEMiniLunaDiversionManager : NSObject <BDXContainerLifecycleProtocol>

@property (class, readonly, nonatomic) AWEMiniLunaDiversionManager *shared;

@property (nonatomic) BOOL isShowingPopup;
@property (nonatomic) BOOL isShowingSubscriber;
@property (retain, nonatomic) DUXBottomNotification *noti;
@property (retain, nonatomic) AWELunaUgPopView *lunaUgPopView;
@property (copy, nonatomic) NSDictionary *eventParams;
@property (nonatomic) BOOL isPrivacyActionSheetShowing;
@property (nonatomic) BOOL isDiversionEnhancePopupShowing;
@property (nonatomic) BOOL isMiniPopupShowing;
@property (nonatomic) BOOL isMiniGestureGuideShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerOnShow:(id)a0 sourceParam:(id)a1;
- (void)containerOnHide:(id)a0 sourceParam:(id)a1;
- (void)showMiniDialogWithModel:(id)a0 scene:(id)a1 trackParams:(id)a2 eventModel:(id)a3 musicService:(id)a4 diversionModel:(id)a5 completion:(id /* block */)a6;
- (BOOL)p_canShowFrequency;
- (void)p_onShowDiversionEnhancePopup;
- (BOOL)canShowDiversionEntry;
- (id)p_typeStrWithType:(unsigned long long)a0;
- (long long)p_thresholdWithType:(unsigned long long)a0;
- (double)p_latestShowTs;
- (double)p_popupShowInterval;
- (double)p_showIntervalForType:(unsigned long long)a0;
- (void)p_showActionSheetWithCount:(long long)a0 type:(unsigned long long)a1;
- (long long)p_stepWithType:(unsigned long long)a0;
- (BOOL)interceptAutoPlay;
- (BOOL)canShowDiversionEnhancePopup:(id)a0 eventModel:(id)a1;
- (void)showDiversionEnhancePopup:(id)a0 trackParams:(id)a1 eventModel:(id)a2 completion:(id /* block */)a3;
- (BOOL)canShowDiversionPopup:(id)a0;
- (void)showDiversionPopup:(id)a0 trackParams:(id)a1 completion:(id /* block */)a2;
- (void)increaseCount:(long long)a0 type:(unsigned long long)a1;
- (void)showSubscriberBottomNotificationWithModel:(id)a0 completion:(id /* block */)a1;
- (BOOL)tryShowGestureGuideInView:(id)a0 eventModel:(id)a1 dismissedBlock:(id /* block */)a2;
- (void)userManualChangedSong;
- (void)hideAll;
- (void).cxx_destruct;
- (id)init;

@end

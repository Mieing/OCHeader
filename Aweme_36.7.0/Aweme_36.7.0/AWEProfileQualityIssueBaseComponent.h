@class NSString;

@interface AWEProfileQualityIssueBaseComponent : AWEProfileBaseComponent <UIGestureRecognizerDelegate, AWEProfileQualityIssueUserSyncService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handlePanGes:(id)a0;
- (void)addGestureIfNeed;
- (void)reportUserSyncErrorIfNeedWithResultUID:(id)a0 resultSecUID:(id)a1 userSyncArea:(id)a2 tabID:(id)a3 path:(id)a4;
- (void)setAttachGestureSet:(id)a0;
- (id)attachGestureSet;
- (unsigned long long)directionFromGesture:(id)a0;
- (BOOL)isProfileFullScreen;
- (BOOL)isExpectedGesture:(id)a0;
- (void)bindUserSyncService;
- (void)viewDidAppear;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)viewDidLoad;
- (id)panGesture;
- (void)setPanGesture:(id)a0;
- (void)onInit;

@end

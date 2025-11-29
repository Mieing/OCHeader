@class NSString, AWEHomePageBubbleTask;

@interface AWEHomePageBubbleManager : NSObject <AWEAlertProtocol, AWEHomePageBubbleManagerProtocol>

@property (retain, nonatomic) AWEHomePageBubbleTask *holdingTask;
@property (nonatomic) BOOL remedy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (unsigned long long)alertViewStyleForEvent:(id)a0;
- (void)alertDismissByPopViewManager:(id)a0;
- (id)containerBizInfoForEvent:(id)a0;
- (void)showWithCloseCallback:(id /* block */)a0;
- (void)onAlertCanceled;
- (BOOL)isInnerPushShowing;
- (BOOL)isBubbleBlocking;
- (long long)canShowBubbleWithTask:(id)a0 businessID:(id)a1 scene:(id)a2 hasHoldTask:(BOOL)a3 pendingTime:(double)a4;
- (BOOL)enableTryShowLogicFix;
- (void)callTryShowTimeout:(id)a0;
- (long long)minimumPendingTimeOnLaunch;
- (void)p_callTryShowTimeout:(id)a0;
- (void)tryShowBubbleWithTask:(id)a0;
- (long long)canShowBubbleWithBusinessID:(id)a0 scene:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end

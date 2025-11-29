@class NSString, NSMutableDictionary, TIMXSDKInstance, NSObject;
@protocol OS_dispatch_queue, TIMXPullerStatusChangeObserverDelegate;

@interface TIMXSimplePullerStatusObserver : NSObject <TIMXPullerStatusChangeObserverDelegate> {
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) NSMutableDictionary *currentReasonForInbox;
@property (retain, nonatomic) id<TIMXPullerStatusChangeObserverDelegate> notifier;
@property (retain, nonatomic) NSMutableDictionary *everWakeUpStatusForInbox;
@property long long requestMessagePropertyStrategy;
@property (retain, nonatomic) NSMutableDictionary *pullInitStatusForInbox;
@property (retain, nonatomic) NSMutableDictionary *pullForUserStatusForInbox;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *listenerQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)currentStatusForInbox:(int)a0;
- (void)didStartInstallInitForUser:(long long)a0 inbox:(int)a1 pullerType:(long long)a2;
- (void)didEndInstallInitForUser:(long long)a0 inbox:(int)a1 pullerType:(long long)a2;
- (void)didSetNeedsToPullWithReason:(long long)a0 forUser:(long long)a1 inbox:(int)a2 pullerType:(long long)a3;
- (void)didStartPullForUser:(long long)a0 inbox:(int)a1 pullerType:(long long)a2;
- (void)didEndPullForUser:(long long)a0 inbox:(int)a1 pullerType:(long long)a2 pullDirection:(unsigned long long)a3 error:(id)a4 hasMore:(BOOL)a5 userInfo:(id)a6;
- (void)didStartPullForUser:(long long)a0 inbox:(int)a1 pullerType:(long long)a2 source:(long long)a3 pullReason:(long long)a4;
- (id)initWithRootObject:(id)a0 notifier:(id)a1;
- (void)setPullInitStatus:(long long)a0 forInbox:(int)a1;
- (void)p_startPullForUser:(long long)a0 inbox:(int)a1 pullerType:(long long)a2 pullReason:(long long)a3;
- (void)requestMessagePropertyWithStrategy:(long long)a0;
- (void)setPullForUserStatus:(long long)a0 forInbox:(int)a1;
- (void).cxx_destruct;

@end

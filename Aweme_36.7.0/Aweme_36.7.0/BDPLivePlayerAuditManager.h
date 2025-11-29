@class NSMapTable, NSMutableDictionary, NSObject, BDPMultiDelegateProxy;
@protocol OS_dispatch_queue, OS_dispatch_source, BDPLivePlayerAuditDelegate;

@interface BDPLivePlayerAuditManager : NSObject {
    BOOL _timerIsEnabled;
    NSMutableDictionary *_historyResultBySrc;
    NSMutableDictionary *_historyResultByID;
    NSMapTable *_auditObservers;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_source> *_timer;
}

@property (retain, nonatomic) BDPMultiDelegateProxy<BDPLivePlayerAuditDelegate> *delegates;

+ (id)sharedManager;

- (void)addAuditTaskWithSrc:(id)a0 observer:(id)a1 appID:(id)a2 completion:(id /* block */)a3;
- (void)removeAuditTaskWithSrc:(id)a0 observer:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

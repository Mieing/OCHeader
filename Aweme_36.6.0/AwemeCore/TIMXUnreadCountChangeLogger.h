@class NSString, TIMXSDKInstance, TIMXGCDTimer, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface TIMXUnreadCountChangeLogger : NSObject <TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) TIMXGCDTimer *logUCTimer;
@property (retain, nonatomic) NSMutableArray *unreadCountChangedConversatioInfoArray;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *p_loggerUCQueue;
@property (retain, nonatomic) TIMXGCDTimer *logTUCTimer;
@property (retain, nonatomic) NSMutableArray *totalUnreadCountChangedInfoArr;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *p_loggerTUCQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)userDidLogout:(id)a0;
- (void)tryToLogTUC;
- (void)addOneUnreadCountChangeLogWithChangeInfo:(id)a0;
- (void)addOneTotalUnreadCountChangeLogWithChangeInfo:(id)a0;
- (void)tryToLogUC;
- (void)__printLogOfUnreadCountChangedConversationArray;
- (void)__printLogOfTotalUnreadCountChangedInfoArr;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithRootObject:(id)a0;

@end

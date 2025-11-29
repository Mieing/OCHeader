@class NSArray, NSTimer, NSHashTable, NSString, NSObject;
@protocol AWEIMTaskCardManagerStickOnTopDelegate, OS_dispatch_semaphore;

@interface AWEIMTaskCardManager : NSObject <AWEUserMessage, AWEIMTaskCardListCellItemMessageProtocol, AWEIMTaskCardManagerInterface>

@property (copy, nonatomic) NSArray *dataArray;
@property (copy, nonatomic) NSArray *visualDataArray;
@property (nonatomic) BOOL useNewWorkSpace;
@property (nonatomic) BOOL isRequesting;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) NSHashTable *delegates;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *delegatesLock;
@property (weak, nonatomic) id<AWEIMTaskCardManagerStickOnTopDelegate> stickOnTopDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEIMModuleServiceHTSAdaperClass;
+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)didFinishUpdateCurrentFullUserForReason:(unsigned long long)a0;
- (id)aAWEIMModuleServiceHTSAdaper;
- (id)lastestData;
- (void)refreshDataArrayWhenReceivePush:(id)a0;
- (void)updateStickOnTopState:(BOOL)a0 completion:(id /* block */)a1;
- (long long)caculateUnreadCountUseOrigin:(BOOL)a0;
- (void)onTaskCardUnreadCountChange;
- (void)lockDelegates;
- (void)unlockDelegates;
- (BOOL)isAccessToTaskPlatform;
- (id)visableDatas;
- (double)pollingTimeInterval;
- (void)didReceiveMuteChanged:(id)a0;
- (void)didReceiveUnreadCountChanged:(id)a0;
- (void)didReceiveClearUnreadChanged:(id)a0;
- (BOOL)stickOnTop;
- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)fetchData;
- (void)dealloc;
- (void)readData:(id)a0;
- (void)startPolling;
- (void)stopPolling;

@end

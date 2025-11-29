@class NSString, RxScheduler, NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface AWEIMSDKChatListObserver : HTSService <IESIMChatDataManagerDelegate, AWEIMSDKChatListObserver>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sharedQueue;
@property (readonly, nonatomic) RxScheduler *sharedScheduler;
@property (nonatomic) BOOL hasStartObserve;
@property (retain, nonatomic) NSDate *conversationCountInfoDate;
@property (nonatomic) int conversationMaxCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)iesim_chatDataManager:(id)a0 chatListDidUpdateWithDeletedChats:(id)a1 insertedChats:(id)a2 firstPage:(BOOL)a3 reason:(long long)a4;
- (void)startObserve;
- (BOOL)p_bindObserver;
- (id)p_errorWithCode:(int)a0 info:(id)a1;
- (id)p_loadInfoFromDisk;
- (id)p_flushInfoIntoDisk;
- (void)p_reportChatCount:(int)a0;
- (BOOL)p_recordAndReportIfNecessaryWithDate:(id)a0 chatCount:(int)a1;
- (void)p_chatCountDidChangeTo:(int)a0;
- (void).cxx_destruct;
- (id)init;

@end

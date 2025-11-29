@class NSString, TIMXECOMGetUserOpenConversationsHandler, TIMXSDKInstance, TIMXECOMGetUserMessageHandler;
@protocol TIMXPullerStatusChangeObserverDelegate, TIMXKVStorageProtocol;

@interface TIMXECOMGetUserMessageInitHandler : NSObject <TIMXECOMGetUserMessageInitProtocol> {
    TIMXSDKInstance *_r;
}

@property (nonatomic) long long userID;
@property (nonatomic) int inbox;
@property unsigned long long pullerInitStatus;
@property (retain, nonatomic) id<TIMXPullerStatusChangeObserverDelegate> notifier;
@property (retain, nonatomic) id<TIMXKVStorageProtocol> kvStorage;
@property (retain, nonatomic) NSString *logMarkerForInit;
@property (nonatomic) double pullStartTime;
@property (retain) TIMXECOMGetUserMessageHandler *getUserMessageHandler;
@property (nonatomic) double netInitPullALLTime;
@property (nonatomic) double dbInitPullALLTime;
@property (nonatomic) long long netInitPullALLCount;
@property (nonatomic) long long hasFetchedMsgCounts;
@property long long hasFetchedConvCounts;
@property (nonatomic) unsigned long long retryCount;
@property (retain) TIMXECOMGetUserOpenConversationsHandler *openConvHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startInit;
- (id)getKeyWithInbox:(id)a0;
- (id)initWithInbox:(int)a0 userID:(long long)a1 rootObject:(id)a2;
- (void)getOpenConversationsList;
- (id)finalGetUserMessageHandler;
- (void)fetchInitListWithNextVersion:(long long)a0 withcompletion:(id /* block */)a1;
- (void)traceInitPerPageLoadTime:(double)a0 isSuccess:(BOOL)a1 totalMsgCount:(unsigned long long)a2 responseTimeCost:(double)a3 saveMsgListTimeCost:(double)a4 saveConversationListTimeCost:(double)a5 convCount:(unsigned long long)a6;
- (void)recordInfoWhenSucceedWithLogID:(id)a0;
- (void)finishInitWithError:(id)a0;
- (void)recordInfoWhenFailedWithError:(id)a0;
- (void)traceInitInfoWithLogID:(id)a0 pullStartTime:(double)a1;
- (void)setNeedsPullPerUserWithReason:(long long)a0;
- (id)configPullContext:(id)a0;
- (void).cxx_destruct;
- (void)kickoff;

@end

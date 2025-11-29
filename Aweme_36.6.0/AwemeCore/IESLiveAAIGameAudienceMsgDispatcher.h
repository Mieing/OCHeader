@class NSString, IESLiveGamePipelinePlumber, IESLiveBoxingSubscriberUtil, NSMutableArray;

@interface IESLiveAAIGameAudienceMsgDispatcher : NSObject <IESLiveAAIGameAudienceMsgDispatcherService>

@property (retain, nonatomic) IESLiveGamePipelinePlumber *msgPipelinePlumber;
@property (nonatomic) BOOL isBlockAllMsg;
@property (retain, nonatomic) NSMutableArray *portMutArr;
@property (retain, nonatomic) IESLiveBoxingSubscriberUtil *subscriberUtil;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDIContext:(id)a0;
- (void)p_startObserveMsg;
- (void)startObserveMsg;
- (void)registerMessageSubscriber:(id)a0;
- (void)unregisterMessageSubscriber:(id)a0;
- (void)observeMsg;
- (void)safeAddObjcToPortMutArr:(id)a0;
- (void)p_updateSubscriberBlockStateWithEntranceMsg:(id)a0;
- (void)p_handleMsg:(id)a0;
- (void)p_handleMsg:(id)a0 withSubscriber:(id)a1;
- (void).cxx_destruct;
- (void)reloadIfNeeded;

@end

@class AWELivePreStreamMessageManager, NSString;

@interface AWELivePreStreamMSequenceMessageDispatcher : NSObject <IESLiveIMDataSyncDelegate, IESLiveIMMessageSubscriber>

@property (weak, nonatomic) AWELivePreStreamMessageManager *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

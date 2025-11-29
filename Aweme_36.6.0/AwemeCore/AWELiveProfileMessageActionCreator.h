@class AWELiveProfileMessageManager, NSString, NSHashTable;

@interface AWELiveProfileMessageActionCreator : IESLiveIMBaseActionCreator <HTSLiveMessageSubscriber>

@property (weak, nonatomic) AWELiveProfileMessageManager *dispatcherManager;
@property (retain, nonatomic) NSHashTable *subscribersForAll;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupWithMessageConfig:(id)a0;
- (void)setupWithRoomID:(id)a0;
- (void)updateDispatcherManager:(id)a0;
- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (void)messageReceived:(id)a0;

@end

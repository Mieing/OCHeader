@class IESLiveChannelDataSyncManager;

@interface IESLiveChatChannelMessageActionCreator : IESLiveIMBaseActionCreator

@property (retain, nonatomic) IESLiveChannelDataSyncManager *wrdsManager;
@property (nonatomic) BOOL enableChannel;

- (void)setupWithMessageConfig:(id)a0;
- (id)initWithDIContext:(id)a0 config:(id)a1;
- (void)cleanCaches;
- (id)setupIMDispatcherWithConfig:(id)a0;
- (id)decideReceiver;
- (void)joinChannelWithID:(id)a0;
- (void)quitChannelWithID:(id)a0;
- (void)checkMessageActionCreatorIfNeed:(id)a0;
- (void).cxx_destruct;

@end

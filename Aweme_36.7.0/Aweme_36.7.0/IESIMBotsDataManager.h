@class NSString, NSArray;
@protocol IESIMSDKBotsInConversationDataSource, IESIMBotsDataManagerDelegate;

@interface IESIMBotsDataManager : NSObject <IESIMTIMXLifeMessage, TIMXOBotsInConversationDataSourceDelegate, IESIMBotsDataManagerProtocol>

@property (retain) id<IESIMSDKBotsInConversationDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *conversationId;
@property (readonly, copy, nonatomic) NSArray *bots;
@property (weak, nonatomic) id<IESIMBotsDataManagerDelegate> delegate;

- (id)initWithConversationId:(id)a0;
- (void)iesim_timxInstanceMounted:(id)a0;
- (void)iesim_timxInstanceUnmounted:(id)a0;
- (void)reloadBots;
- (void)botsDataSourceDidUpdate:(id)a0;
- (void).cxx_destruct;

@end

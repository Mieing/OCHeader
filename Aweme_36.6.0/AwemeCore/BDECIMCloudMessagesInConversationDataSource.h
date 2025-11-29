@class TIMXOMessagesInConversationDataSource, NSString, NSArray, BDECIMClientConfig, TIMXECOMRemedialMessagesInConversationDataSource;

@interface BDECIMCloudMessagesInConversationDataSource : NSObject <TIMXOMessagesDataSourceDelegate, BDECIMCloudMessagesInConversationDataSourceInterface>

@property (retain, nonatomic) BDECIMClientConfig *config;
@property (retain, nonatomic) TIMXOMessagesInConversationDataSource *timxDataSource;
@property (retain, nonatomic) TIMXECOMRemedialMessagesInConversationDataSource *timxRemedialDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasOlderMessages;
@property (readonly, copy, nonatomic) NSArray *currentMessageIDs;
@property (copy, nonatomic) id /* block */ messageDataSourceUpdated;

- (void)loadOlderMessagesWithCompletionBlock:(id /* block */)a0;
- (void)messageDataSource:(id)a0 didUpdateWithUpdate:(id)a1 completion:(id /* block */)a2;
- (void)messageDataSource:(id)a0 didUpdateWithUpdate:(id)a1 context:(id)a2 completion:(id /* block */)a3;
- (id)initWithInitialLocationLatestMessageForConversationID:(id)a0 options:(id)a1 config:(id)a2;
- (void)loadOlderMessagesRemedialyWithLoadFirstPage:(BOOL)a0 completionBlock:(id /* block */)a1;
- (void)firstLoadOlderMessagesWithCompletionBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end

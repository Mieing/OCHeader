@class TIMXECOMRemedialMessagesInConversationDataSource, NSString, NSArray, BDECPigeonClientConfigV2;
@protocol BDECIMCloudMessagesInConversationDataSourceV2Delegate;

@interface BDECIMCloudRemedialMessagesInConversationDataSourceV2 : NSObject <TIMXOMessagesDataSourceDelegate, BDECIMCloudRemedialMessagesInConversationDataSourceV2Interface>

@property (retain, nonatomic) BDECPigeonClientConfigV2 *config;
@property (retain, nonatomic) TIMXECOMRemedialMessagesInConversationDataSource *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasOlderMessages;
@property (readonly, nonatomic) BOOL hasNewerMessages;
@property (readonly, copy, nonatomic) NSArray *currentMessageIDs;
@property (weak, nonatomic) id<BDECIMCloudMessagesInConversationDataSourceV2Delegate> delegate;

- (void)loadOlderMessagesWithLastContinuousMessages:(BOOL)a0 completionBlock:(id /* block */)a1;
- (void)loadOlderMessagesWithCompletionBlock:(id /* block */)a0;
- (void)messageDataSource:(id)a0 didUpdateWithUpdate:(id)a1 context:(id)a2 completion:(id /* block */)a3;
- (id)initWithConversationID:(id)a0 options:(id)a1 config:(id)a2;
- (void)loadMessagesIsFromNewToOld:(BOOL)a0 priorityUseDB:(BOOL)a1 indexV2:(long long)a2 completionBlock:(id /* block */)a3;
- (void).cxx_destruct;

@end

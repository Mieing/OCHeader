@class TIMXOMessagesInConversationDataSource, NSString, NSArray, BDECPigeonClientConfigV2;
@protocol BDECIMCloudMessagesInConversationDataSourceV2Delegate;

@interface BDECIMCloudMessagesInConversationDataSourceV2 : NSObject <TIMXOMessagesDataSourceDelegate, BDECIMCloudMessagesInConversationDataSourceV2Interface>

@property (retain, nonatomic) BDECPigeonClientConfigV2 *config;
@property (retain, nonatomic) TIMXOMessagesInConversationDataSource *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasOlderMessages;
@property (readonly, nonatomic) BOOL hasNewerMessages;
@property (readonly, copy, nonatomic) NSArray *currentMessageIDs;
@property (weak, nonatomic) id<BDECIMCloudMessagesInConversationDataSourceV2Delegate> delegate;

@end

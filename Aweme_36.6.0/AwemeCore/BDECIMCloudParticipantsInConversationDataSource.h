@class NSString, TIMXOParticipantsInConversationDataSource, BDECIMClientConfig, NSArray;
@protocol BDECIMCloudParticipantsInConversationDataSourceDelegate;

@interface BDECIMCloudParticipantsInConversationDataSource : NSObject <TIMXOParticipantsInConversationDataSourceDelegate, BDECIMCloudParticipantsInConversationDataSourceInterface>

@property (retain, nonatomic) BDECIMClientConfig *config;
@property (retain, nonatomic) TIMXOParticipantsInConversationDataSource *timxDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<BDECIMCloudParticipantsInConversationDataSourceDelegate> delegate;
@property (readonly, nonatomic) NSString *conversationID;
@property (readonly, nonatomic) NSArray *participants;
@property (readonly, nonatomic) NSArray *admParticipants;

@end

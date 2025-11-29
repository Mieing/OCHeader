@class NSString, BDECIMClient, NSArray;
@protocol BDECIMCloudParticipantsInConversationDataSourceInterface, BDECIMParticipantsInConversationDataSourceDelegate;

@interface BDECIMParticipantsInConversationDataSource : NSObject <BDECIMCloudParticipantsInConversationDataSourceDelegate>

@property (retain, nonatomic) id<BDECIMCloudParticipantsInConversationDataSourceInterface> dataSource;
@property (retain, nonatomic) BDECIMClient *client;
@property (readonly, nonatomic) NSString *conversationID;
@property (readonly, nonatomic) NSArray *participants;
@property (readonly, nonatomic) NSArray *admParticipants;
@property (weak, nonatomic) id<BDECIMParticipantsInConversationDataSourceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

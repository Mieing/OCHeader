@class NSString, TIMXOParticipantsInConversationDataSource, NSArray, BDECPigeonClientConfigV2;
@protocol BDECIMCloudParticipantsInConversationDataSourceV2Delegate;

@interface BDECIMCloudParticipantsInConversationDataSourceV2 : NSObject <TIMXOParticipantsInConversationDataSourceDelegate, BDECIMCloudParticipantsInConversationDataSourceV2Interface>

@property (retain, nonatomic) BDECPigeonClientConfigV2 *config;
@property (retain, nonatomic) TIMXOParticipantsInConversationDataSource *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<BDECIMCloudParticipantsInConversationDataSourceV2Delegate> delegate;
@property (readonly, nonatomic) NSString *conversationID;
@property (readonly, nonatomic) NSArray *participants;
@property (readonly, nonatomic) NSArray *admParticipants;

+ (id)transformedParticipantSetWithParticipantSet:(id)a0;
+ (id)transformedParticipantListWithParticipantList:(id)a0;
+ (id)transformedParticipantWithPariticipant:(id)a0;

@end

@class NSString, NSMutableDictionary, NSMutableSet, NSMutableArray;

@interface TIMXMessageStoreUpdate : MTLModel

@property (retain, nonatomic) NSMutableSet *createdConversationIDs;
@property (retain, nonatomic) NSMutableSet *modifiedConversationIDs;
@property (retain, nonatomic) NSMutableSet *deletedConversationIDs;
@property (retain, nonatomic) NSMutableSet *innerModifiedConversationIDs;
@property (retain, nonatomic) NSString *createMessagesReason;
@property (retain, nonatomic) NSMutableSet *createdMessageIDs;
@property (retain, nonatomic) NSMutableArray *createdMessages;
@property (retain, nonatomic) NSMutableSet *serverMessageIDs;
@property (retain, nonatomic) NSMutableSet *modifiedMessageIDs;
@property (retain, nonatomic) NSMutableSet *deletedMessageIDs;
@property (retain, nonatomic) NSMutableSet *modifiedMessageNewPropertyIDs;
@property (retain, nonatomic) NSMutableDictionary *messageModifyOldPropertiesMap;
@property (retain, nonatomic) NSMutableDictionary *messageModifyNewPropertiesMap;
@property (retain, nonatomic) NSMutableSet *createdMessagePropertyIDs;
@property (retain, nonatomic) NSMutableSet *modifiedMessagePropertyIDs;
@property (retain, nonatomic) NSMutableDictionary *messageBelongingConversationMap;
@property (retain, nonatomic) NSMutableDictionary *messageToMessagePropertiesMap;
@property (retain, nonatomic) NSMutableSet *createdFileIDs;
@property (retain, nonatomic) NSMutableSet *modifiedFileIDs;
@property (retain, nonatomic) NSMutableSet *deletedFileIDs;
@property (retain, nonatomic) NSMutableSet *modifiedConversationParticipantsIDs;
@property (retain, nonatomic) NSMutableSet *clearedConversationIDs;
@property (retain, nonatomic) NSMutableSet *unknownParticipantConversationParticipantsIDs;
@property (retain, nonatomic) NSMutableSet *modifiedConversationBotsIDs;
@property (retain, nonatomic) NSMutableSet *redundantMessageIDs;
@property (retain, nonatomic) NSMutableDictionary *redundantMessageBelongingConversationMap;
@property (retain, nonatomic) NSMutableSet *deletedThirdPartyConversationIDs;
@property (retain, nonatomic) NSMutableSet *createdThirdPartyConversationIDs;
@property (retain, nonatomic) NSMutableSet *modifiedThirdPartyConversationIDs;
@property (retain, nonatomic) NSMutableSet *deletedThirdPartyMessageIDs;
@property (retain, nonatomic) NSMutableSet *createdThirdPartyMessageIDs;
@property (retain, nonatomic) NSMutableSet *modifiedThirdPartyMessageIDs;
@property (retain, nonatomic) NSMutableDictionary *thirdPartyMessageBelongingConversationMap;

- (id)validDescriptionDict;
- (id)validDescriptionStringsArrayWithDescDict:(id)a0;
- (void)recordPropertyWithDict:(id)a0 key:(id)a1 set:(id)a2;
- (id)validDescriptionStrings;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

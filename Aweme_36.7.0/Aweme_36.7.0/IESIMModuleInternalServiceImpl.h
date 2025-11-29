@class NSString;

@interface IESIMModuleInternalServiceImpl : NSObject <IESIMModuleInternalService>

@property (copy, nonatomic) NSString *latestEnteredConversationID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedIntance;

- (id)extractEnterIMGroupTokenWithText:(id)a0;
- (BOOL)im_showBlockAlert;
- (id)groupParticipantsWithConversationID:(id)a0;
- (BOOL)currentChatConversationHasChatBackground;
- (BOOL)hitReverseExperimentWithSource:(id)a0 secUid:(id)a1;
- (id)getChatProcessIdWithConversationId:(id)a0 event:(id)a1;
- (void)setEnterFrom:(id)a0 processId:(id)a1;
- (void)setEnterMethod:(id)a0 processId:(id)a1;
- (void)setCustomKey:(id)a0 value:(id)a1 processId:(id)a2;
- (void)updateLatestEnteredConversationID:(id)a0;
- (BOOL)whetherHasChatBackgroundWithConID:(id)a0;
- (BOOL)whetherChatBackgroundIsBrightWithConID:(id)a0;
- (id)peerAbKeyForSource:(id)a0;
- (id)customKey:(id)a0 processId:(id)a1 cleanAfterGet:(BOOL)a2;
- (void).cxx_destruct;

@end

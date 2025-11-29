@class IESIMMentionBotsConfiguration, NSString, NSArray, AWEIMCollectionListModel, AWEIMMentionParticipantSearchModel, NSDictionary, AWEIMMessageConversation, AWEIMConversationContext;
@protocol IESIMSearchEngineProtocol, AWEIMMentionParticipantDataControllerDelegate, IESIMBotsDataManagerProtocol;

@interface AWEIMMentionParticipantDataController : NSObject <IESIMBotsDataManagerDelegate>

@property (retain, nonatomic) AWEIMConversationContext *conversationContext;
@property (retain, nonatomic) id<IESIMBotsDataManagerProtocol> botsDataController;
@property (copy, nonatomic) NSDictionary *aiAppendTipsMap;
@property (retain, nonatomic) id<IESIMSearchEngineProtocol> searchEngine;
@property (retain, nonatomic) AWEIMMentionParticipantSearchModel *atAllModel;
@property (copy, nonatomic) NSArray *bots;
@property (copy, nonatomic) NSArray *aiClones;
@property (copy, nonatomic) NSArray *participants;
@property (retain, nonatomic) AWEIMMentionParticipantSearchModel *inviteBotsModel;
@property (nonatomic) BOOL isInSearchMode;
@property (nonatomic) BOOL isFetchingIntimacyData;
@property (retain, nonatomic) AWEIMCollectionListModel *listModel;
@property (retain, nonatomic) NSArray *groupIntimacyArray;
@property (copy, nonatomic) NSArray *sectionTypes;
@property (retain, nonatomic) IESIMMentionBotsConfiguration *mentionBotsConfiguration;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (weak, nonatomic) id<AWEIMMentionParticipantDataControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConversationContext:(id)a0;
- (void)iesim_botsDataSourceDidUpdate;
- (void)searchWithKeyword:(id)a0;
- (void)formatData;
- (void)p_setupSearchEngine;
- (id)p_displayNameForSortWithImUser:(id)a0;
- (BOOL)p_isNumberFirst:(id)a0;
- (void)p_sortedDataArray:(id)a0 fromArray:(id)a1;
- (void)makeSelectAIAppendTips:(id)a0;
- (void)resetSearchMode;
- (void)p_formatBotsData;
- (void)p_formatParticipantsData;
- (void)p_updateInviteBots;
- (id)p_sortedPaticipantsFromArray:(id)a0;
- (id)p_sortedPaticipantsByAtandIntimacy:(id)a0 atDic:(id)a1 intimacyArr:(id)a2;
- (void)p_getandSaveIntimacyData;
- (void)p_updateAtAllAccess;
- (id)p_botsToBeDisplay;
- (id)p_resultForSearchList:(id)a0 keyword:(id)a1 operation:(id)a2;
- (id)selectAIAppendTipWithUid:(id)a0;
- (void).cxx_destruct;
- (void)refreshData;

@end

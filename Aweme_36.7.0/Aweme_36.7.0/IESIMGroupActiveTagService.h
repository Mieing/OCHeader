@interface IESIMGroupActiveTagService : HTSService <IESIMGroupActiveTagService>

- (void)showActiveTagDetailPanelWithConversation:(id)a0 enterFrom:(id)a1;
- (BOOL)enableActiveTagV2WithConversationID:(id)a0;
- (void)trackGroupActiveTagEvent:(id)a0 conversation:(id)a1 enterFrom:(id)a2;
- (BOOL)activeTagDisplayIfNeed:(id)a0;
- (id)getCurrentLoginUserPeerViewModelWithConversation:(id)a0;
- (id)init;

@end

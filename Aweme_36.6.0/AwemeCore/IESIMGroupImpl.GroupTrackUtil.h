@interface IESIMGroupImpl.GroupTrackUtil : NSObject <IESIMGroupTrackUtil> {
    void /* unknown type, empty encoding */ createTypeMapper;
}

- (id)groupTypeWithConversation:(id)a0;
- (id)groupCreateSourceWithConversation:(id)a0;
- (id)newGroupTypeWithConversation:(id)a0;
- (id)groupCreateTypeWithConversation:(id)a0;
- (id)chatTypeWithConversation:(id)a0;
- (void)addGroupCatagoryToTrackParams:(id)a0 withConversation:(id)a1;
- (void)trackCreateGroupEvent:(id)a0 params:(id)a1 result:(id)a2;
- (void)trackIncentiveRecommendCreateGroupPanelShowWithActionType:(id)a0 inspireFriendsShow:(int)a1 inspireFriendsPick:(int)a2 noInspireFriendsPick:(int)a3 isInspire:(BOOL)a4;
- (id)newGroupTypeParamsWithConversation:(id)a0;
- (id)groupCategoryWithConversation:(id)a0;
- (id)currentUserRoleWithConversation:(id)a0;
- (void)addNewGroupTypeParamsToTrackParams:(id)a0 withConversation:(id)a1;
- (id)commonGroupTrackParamsWithConversation:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

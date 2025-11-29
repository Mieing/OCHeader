@interface IESIMGroupInfoOtherSceneService : HTSService <IESIMGroupInfoOtherSceneService> {
    void /* unknown type, empty encoding */ kAWEStorageIMGroupOtherSceneDomain;
}

- (void)fetchInfoOtherSceneWithConversationShortID:(id)a0 scene:(long long)a1 otherParams:(id)a2 completion:(id /* block */)a3;
- (id)getOtherSceneABValueByConversationID:(id)a0 scene:(long long)a1;
- (id)getInfoOtherSceneModelByConversationID:(id)a0 scene:(long long)a1;
- (void)storeOtherSceneByConversationID:(id)a0 scene:(long long)a1 otherSceneModel:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end

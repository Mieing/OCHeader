@interface IESIMGroupParticipantTagDataService : HTSService <IESIMUserServiceMessage, IESIMGroupParticipantTagDataService> {
    void /* unknown type, empty encoding */ tagDataBase;
}

- (void)didFinishLogoutWithUid:(id)a0;
- (void)fetchDataWithConv:(id)a0 completion:(id /* block */)a1;
- (void)fetchDataWithConv:(id)a0 targetUidList:(id)a1 isNeedTagItem:(BOOL)a2 completion:(id /* block */)a3;
- (id)tagConfigDataWithCid:(id)a0;
- (id)loadContainerModelsWithConID:(id)a0 scene:(long long)a1;
- (void)tagInfoDataWithCid:(id)a0 completion:(id /* block */)a1;
- (void)tagConfigDataWithCid:(id)a0 completion:(id /* block */)a1;
- (void)tagConfigDataWithCid:(id)a0 tagKey:(id)a1 completion:(id /* block */)a2;
- (void)participantTagDataWithCid:(id)a0 completion:(id /* block */)a1;
- (void)participantTagDataWithCid:(id)a0 secUid:(id)a1 completion:(id /* block */)a2;
- (void)loadContainerModelWithConID:(id)a0 secUid:(id)a1 scene:(long long)a2 completion:(id /* block */)a3;
- (void)loadContainerModelsWithConID:(id)a0 scene:(long long)a1 completion:(id /* block */)a2;
- (void)tagSecUidListWithCid:(id)a0 completion:(id /* block */)a1;
- (id)participantTagLevelWithCid:(id)a0 secUid:(id)a1 tagKey:(id)a2;
- (void)fetchDetailPageDataWithConv:(id)a0 templateId:(id)a1 applicationId:(id)a2 completion:(id /* block */)a3;
- (void)loadContainerModelWithConID:(id)a0 tagInfo:(id)a1 secUid:(id)a2 scene:(long long)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

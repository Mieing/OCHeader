@interface IESLiveLinkmicSettingApi : HTSLiveApi

- (void)fetchSettings:(id)a0 userID:(id)a1 secUserID:(id)a2 callback:(id /* block */)a3;
- (void)updateSetting:(id)a0 scene:(id)a1 extParams:(id)a2 callback:(id /* block */)a3;
- (void)fetchAudienceSettings:(id)a0 keys:(id)a1 callback:(id /* block */)a2;
- (void)updateAudienceSettings:(id)a0 settings:(id)a1 callback:(id /* block */)a2;

@end

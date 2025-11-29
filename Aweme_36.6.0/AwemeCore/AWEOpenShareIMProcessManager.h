@interface AWEOpenShareIMProcessManager : NSObject

+ (void)updateCompletionRespWithStatusCode:(unsigned long long)a0 completionResp:(id)a1;
+ (void)reportIMMonitorsWithResp:(id)a0 code:(unsigned long long)a1 transferBack:(BOOL)a2 didChooseMultiple:(BOOL)a3;
+ (void)getGameInvitationIMInfoFromShareRespInfo:(id)a0 completion:(id /* block */)a1;
+ (void)reportCardMonitorWith:(id)a0 resp:(id)a1;
+ (void)reportPanelShowMonitor:(id)a0 isFromIM:(BOOL)a1 didChooseMultiple:(BOOL)a2;
+ (void)reportPanelClickMonitor:(id)a0 returnToThirdClicked:(BOOL)a1 isFromIM:(BOOL)a2 didChooseMultiple:(BOOL)a3;
+ (void)imShareMicroAppWithResp:(id)a0 params:(id)a1 completion:(id /* block */)a2;
+ (void)imShareMusicCardWithResp:(id)a0 withReq:(id)a1 params:(id)a2 completion:(id /* block */)a3;
+ (void)imShareLinkWithResp:(id)a0 withReq:(id)a1 params:(id)a2 completion:(id /* block */)a3;
+ (void)imShareImageWithResp:(id)a0 withReq:(id)a1 asset:(id)a2 completion:(id /* block */)a3;
+ (void)shareGameAddGroupWithId:(id)a0 openId:(id)a1 clientKey:(id)a2 addGroupType:(long long)a3 groupType:(long long)a4 completionResp:(id)a5 completion:(id /* block */)a6;
+ (void)jumpToContactWithOpenId:(id)a0 targetOpenId:(id)a1 clientKey:(id)a2 completionResp:(id)a3 completion:(id /* block */)a4;
+ (void)shareGameInvitationWithShareResponse:(id)a0 completionResp:(id)a1 completion:(id /* block */)a2;
+ (void)jumpToAlbumWithResp:(id)a0 completion:(id /* block */)a1;
+ (void)jumpToProfileWithOpenId:(id)a0 targetOpenId:(id)a1 clientKey:(id)a2 extraParams:(id)a3 completionResp:(id)a4 completion:(id /* block */)a5;

@end

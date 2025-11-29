@class IESLiveAPISpecialParamsService;

@interface IESLivePartyKTVChorusApi : IESLiveKTVBaseApi

@property (retain, nonatomic) IESLiveAPISpecialParamsService *specialParamsService;

- (void)leavePartyKTVChorusWithInfo:(id)a0 noToast:(BOOL)a1 completion:(id /* block */)a2;
- (id)initWithRoomId:(id)a0 userId:(id)a1 trackContext:(id)a2;
- (void)inviteFriendsGroupChorusWithUserIdList:(id)a0 completion:(id /* block */)a1;
- (void)handlerResponse:(id)a0 error:(id)a1 noToast:(BOOL)a2 startTime:(double)a3 event:(id)a4 extra:(id)a5 completion:(id /* block */)a6;
- (void)reportPartyKTVChorusInfoWithInfo:(id)a0 completion:(id /* block */)a1;
- (void)joinPartyKTVChorusWithChorusId:(id)a0 musicId:(id)a1 completion:(id /* block */)a2;
- (void)jumpToPartyKTVChorus:(id)a0 completion:(id /* block */)a1;
- (void)fetchPartyKTVSettingsWithRoomID:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)post:(id)a0;
- (id)get:(id)a0;

@end

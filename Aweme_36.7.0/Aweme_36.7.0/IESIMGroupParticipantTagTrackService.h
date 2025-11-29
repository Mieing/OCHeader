@interface IESIMGroupParticipantTagTrackService : HTSService <IESIMGroupParticipantTagTrackService>

- (id)getCommonTagTrackParams:(id)a0 tagKey:(id)a1 tagCategory:(id)a2 customizedID:(id)a3 customizedType:(id)a4 tagLevel:(id)a5 enterFrom:(id)a6;
- (id)getCommonTagTrackParams:(id)a0 tagItem:(id)a1 tagLevel:(id)a2 enterFrom:(id)a3;
- (id)getCommonTagTrackParams:(id)a0 appItem:(id)a1 tagLevel:(id)a2 enterFrom:(id)a3;
- (void)trackNoticeShow:(id)a0 aweType:(long long)a1;
- (void)trackGroupMonitorAPIWithCon:(id)a0 path:(id)a1 isSuccess:(BOOL)a2 duration:(double)a3 isFirstRequest:(BOOL)a4 statusCode:(long long)a5 statusMessage:(id)a6 ext:(id)a7;
- (void)trackDBOperationCostWithCon:(id)a0 type:(id)a1 tag:(id)a2 costTime:(double)a3;
- (id)init;

@end

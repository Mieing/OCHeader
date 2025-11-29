@class NSString;

@interface IESLiveUserRightsAPIImpl : NSObject <IESLiveUserRightsAPI>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestEcomFansClubEntryInfoWithRoom:(id)a0 completion:(id /* block */)a1;
- (void)requestUserFansClubInfoWithRoom:(id)a0 userID:(id)a1 secUserID:(id)a2 completion:(id /* block */)a3;
- (void)requestFansClubHomePageWithRoom:(id)a0 userID:(id)a1 source:(long long)a2 completion:(id /* block */)a3;
- (void)requestFansClubEntryInfoWithRoom:(id)a0 userID:(id)a1 completion:(id /* block */)a2;
- (void)monitor_requestUserFansClubInfoWithDuration:(double)a0 error:(id)a1 roomID:(id)a2 userID:(id)a3;
- (void)monitor_requestFansClubEntryInfoWithDuration:(double)a0 error:(id)a1 userID:(id)a2 room:(id)a3;
- (void)track_fansClubApiCallWithTrackContext:(id)a0 isEcomFansClub:(BOOL)a1;

@end

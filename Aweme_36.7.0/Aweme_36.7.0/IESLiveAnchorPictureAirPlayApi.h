@class HTSLiveCoverImageApi, IESLiveUpdateRoomInfoApi;

@interface IESLiveAnchorPictureAirPlayApi : HTSLiveApi

@property (retain, nonatomic) HTSLiveCoverImageApi *coverImageApi;
@property (retain, nonatomic) IESLiveUpdateRoomInfoApi *updateRoomInfoApi;

- (void)uploadImage:(id)a0 completion:(id /* block */)a1;
- (void)sendPictureAuditWithRoomId:(id)a0 imageURI:(id)a1 completion:(id /* block */)a2;
- (void)fetchPictureAuditResultWithRoomId:(id)a0 auditId:(id)a1 completion:(id /* block */)a2;
- (void)syncPictureAirPlayStatusWithRoomId:(id)a0 isOpen:(BOOL)a1 completion:(id /* block */)a2;
- (void)fetchPictureAirPlayPermissionWithRoomId:(id)a0 hasMountRevenueComponent:(BOOL)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end

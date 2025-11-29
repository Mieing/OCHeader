@protocol IESLiveRoomService;

@interface IESLiveScreenRecordApi : HTSLiveApi

@property (retain, nonatomic) id<IESLiveRoomService> roomModel;

- (void)fetchHighlightPreviewWithRoomID:(id)a0 liveID:(id)a1 userID:(id)a2 appID:(id)a3 deviceID:(id)a4 completion:(id /* block */)a5;
- (void)requestBy:(id)a0 endTime:(id)a1 andCallback:(id /* block */)a2;
- (void)fetchAllSortedFansGroup:(id)a0 roomId:(id)a1 complection:(id /* block */)a2;
- (void).cxx_destruct;

@end

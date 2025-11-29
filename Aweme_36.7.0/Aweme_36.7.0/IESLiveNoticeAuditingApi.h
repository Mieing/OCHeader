@protocol IESLiveRoomService;

@interface IESLiveNoticeAuditingApi : HTSLiveApi

@property (retain, nonatomic) id<IESLiveRoomService> roomModel;

- (void)fetchAuditingStatus:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithRoom:(id)a0;

@end

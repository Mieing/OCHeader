@protocol IESLiveRoomService;

@interface IESLiveRoomLinkDidShowVCParam : IESLiveLinkContextParam

@property (retain, nonatomic) id<IESLiveRoomService> roomService;
@property (nonatomic) BOOL reuseFlag;

- (void).cxx_destruct;

@end

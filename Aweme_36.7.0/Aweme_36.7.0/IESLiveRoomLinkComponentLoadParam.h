@class IESLiveEnterRoomTraceContext, HTSEventContext, HTSLiveStreamPlayer, IESLiveDIContext;
@protocol IESLiveRoomService, IESLiveMessageActionCreatorProtocol;

@interface IESLiveRoomLinkComponentLoadParam : IESLiveLinkContextParam

@property (retain, nonatomic) id<IESLiveRoomService> roomService;
@property (retain, nonatomic) IESLiveDIContext *DIContext;
@property (weak, nonatomic) id<IESLiveMessageActionCreatorProtocol> messageActionCreator;
@property (weak, nonatomic) IESLiveEnterRoomTraceContext *enterContext;
@property (weak, nonatomic) HTSLiveStreamPlayer *streamPlayer;
@property (nonatomic) double p0Duration;
@property (weak, nonatomic) HTSEventContext *pageContext;

- (void).cxx_destruct;

@end

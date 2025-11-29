@class HTSLiveRoom, HTSEventContext, IESLiveEnterRoomAisle, IESLiveEnterRoomBusinessParamsArray;

@interface IESLiveRoomLinkInnerPreParam : IESLiveLinkContextParam

@property (retain, nonatomic) HTSLiveRoom *room;
@property (retain, nonatomic) IESLiveEnterRoomBusinessParamsArray *businessParams;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (weak, nonatomic) IESLiveEnterRoomAisle *originRoomAisle;
@property (nonatomic) BOOL firstFrameRender;

- (void).cxx_destruct;

@end

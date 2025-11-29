@class IESLiveComponentContext, HTSEventContext, IESLiveDirectorRoomModel;

@interface IESLiveDirectorComponent : IESLiveComponentBase

@property (retain, nonatomic) IESLiveDirectorRoomModel *room;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) HTSEventContext *trackContext;

- (void)setRoom:(id)a0 componentContext:(id)a1 trackContext:(id)a2;
- (void).cxx_destruct;

@end

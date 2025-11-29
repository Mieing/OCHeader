@class UIViewController, HTSEventContext, IESLiveDI, IESLiveRoomExtraConfigModel, IESLiveComponentContext, HTSLiveRoom;
@protocol IESLiveRoomService, IESLiveRecoder;

@interface IESLiveMediaContainerContext : IESLiveContainerBaseContext

@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) HTSEventContext *pageContext;
@property (retain, nonatomic) HTSLiveRoom *roomModel;
@property (retain, nonatomic) IESLiveRoomExtraConfigModel *extraConfig;
@property (retain, nonatomic) id<IESLiveRecoder> recoder;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) IESLiveDI *roomDI;
@property (weak, nonatomic) UIViewController *mediaVC;

- (id)initWithComponentContext:(id)a0 pageContext:(id)a1 roomModel:(id)a2 room:(id)a3 extraConfig:(id)a4 recoder:(id)a5;
- (void).cxx_destruct;

@end

@class IESLiveInteractGameMusicPanelModel, HTSEventContext, IESLiveInteractGameMusicPanelView, NSString;
@protocol IESLiveRoomService;

@interface IESLiveInteractGameMusicPanelHandler : NSObject <IESLiveInteractGameMusicPanelHandlerProtocol>

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveInteractGameMusicPanelView *panelView;
@property (retain, nonatomic) IESLiveInteractGameMusicPanelModel *panelModel;
@property (copy, nonatomic) id /* block */ startMusicCallback;
@property (copy, nonatomic) id /* block */ hideCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissPanel;
- (void)p_showPanel:(id /* block */)a0 completion:(id /* block */)a1;
- (void)p_dismissPanel;
- (void)p_loadPanelViewWithPopupItem:(id)a0;
- (id)initWithContext:(id)a0 room:(id)a1 trackContext:(id)a2;
- (void)showPanelWithRequiredSongInfo:(id)a0 showBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end

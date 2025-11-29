@class IESLiveInteractReplacePanelAPi, IESLiveInteractReplacePanelUIAdapter, NSTimer, NSArray, HTSEventContext, NSString;
@protocol IESLiveRoomService, IESLiveInteractUserModel;

@interface IESLiveInteractReplacePanelViewModel : NSObject <IESLiveSocialInteractAction, IESLiveMultiAudioAction>

@property (retain, nonatomic) IESLiveInteractReplacePanelUIAdapter *adapter;
@property (retain, nonatomic) IESLiveInteractReplacePanelAPi *api;
@property (weak, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) id<IESLiveInteractUserModel> guest;
@property (nonatomic) long long originSelectIndex;
@property (nonatomic) long long currentSelectIndex;
@property (retain, nonatomic) NSTimer *pingTimer;
@property (nonatomic) BOOL isAudio;
@property (nonatomic) BOOL banPingForOnce;
@property (nonatomic) BOOL hasComfirmed;
@property (nonatomic) BOOL abEnable;
@property (retain, nonatomic) NSArray *slotModels;
@property (nonatomic) struct CGSize { double width; double height; } panelSize;
@property (nonatomic) long long selectMicIndex;
@property (nonatomic) unsigned long long panelStatus;
@property (nonatomic) BOOL comfirmEnable;
@property (readonly, nonatomic) HTSEventContext *eventContext;
@property (copy, nonatomic) NSString *popTitle;
@property (copy, nonatomic) id /* block */ popclickBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableSeatExchangeWithCurrentLayoutWithLayout:(id)a0;

- (void)didSetAttachingDIContext;
- (id)trackParam;
- (void)hidePanel;
- (void)currentServerLayoutDidChangedFrom:(id)a0 to:(id)a1;
- (void)multiAudioDidChangeTeamFightLayout:(BOOL)a0;
- (id)initWithGuest:(id)a0 isAudio:(BOOL)a1 eventContext:(id)a2;
- (double)panelTopGap;
- (double)panelDownGap;
- (struct CGSize { double x0; double x1; })popUpSize;
- (void)onCellClick:(id)a0;
- (void)comfirmBtnClick;
- (id)panelViewWithCurModel;
- (void)closePanelCompletion;
- (void)requestPanelInfo;
- (void)initSelecting;
- (void)comfirmChange;
- (void)p_trackConfirmClick;
- (void)p_trackReplaceFail:(id)a0;
- (void)p_trackReplaceSuccess;
- (void).cxx_destruct;

@end

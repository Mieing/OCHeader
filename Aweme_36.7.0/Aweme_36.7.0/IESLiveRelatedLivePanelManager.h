@class HTSEventContext, NSString, UIView, NSMutableArray, IESLiveRelatedLivePortraitPanel;
@protocol IESLiveRoomService;

@interface IESLiveRelatedLivePanelManager : NSObject <HTSLiveStreamPlayerAction>

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) NSMutableArray *panelTabs;
@property (retain, nonatomic) IESLiveRelatedLivePortraitPanel *portraitPanelView;
@property (retain, nonatomic) UIView *popuoPanelView;
@property (retain, nonatomic) UIView *playerScalePanelView;
@property (nonatomic) unsigned long long currentPanelType;
@property (copy, nonatomic) id /* block */ dismissHandler;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (copy, nonatomic) id /* block */ userInteractAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)onCameraWillChangeTo:(id)a0 source:(long long)a1;
- (void)onRoomStyleWillChange:(BOOL)a0 callTrace:(id)a1;
- (void)updateRoom:(id)a0;
- (void)closeRelatedLivePanel;
- (void)addPanelTab:(id)a0;
- (void)removePanelTab:(id)a0;
- (BOOL)canOpenRelatedLivePanel;
- (void)openRelatedLivePanel:(unsigned long long)a0 dismissCompletion:(id /* block */)a1;
- (void)openPortraitPanel;
- (void)openPopupPanel;
- (void)openPlayerScalePanel;
- (void)tr_headerChange:(id)a0;
- (void)closePopupPanel;
- (void)closePortraitPanelAnimation:(BOOL)a0;
- (void)closePlayerScalePanel;
- (void).cxx_destruct;
- (id)initWithRoom:(id)a0;

@end

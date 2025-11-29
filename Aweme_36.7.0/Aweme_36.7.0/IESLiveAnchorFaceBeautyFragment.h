@class IESLiveBeautyHandlerWrapper, NSString, IESLiveBeautyTrackImp;

@interface IESLiveAnchorFaceBeautyFragment : IESLiveRoomComponent <IESLiveBeautyHandlerDelegate, IESLiveBeautyRouter>

@property (retain, nonatomic) IESLiveBeautyHandlerWrapper *handlerWrapper;
@property (retain, nonatomic) IESLiveBeautyTrackImp *beautyTracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)mountDidFinishForLevel:(long long)a0;
- (void)showBeautyPanel;
- (id)changeAppearenceSwitch:(BOOL)a0;
- (id)changeBodySwitch:(BOOL)a0;
- (void)openBeautyPanel;
- (void)setupBeautyToolBarItem;
- (void)setupParams;
- (void)onBeautyItemClicked;
- (void).cxx_destruct;

@end

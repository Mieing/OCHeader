@class NSString, NSTimer, HTSLiveToolbarItem, IESLiveAnchorVRGuideView;

@interface IESLiveAnchorVRFragment : IESLiveRoomComponent <IESLiveAnchorModuleInterface>

@property (nonatomic) BOOL justShowRecenterBubble;
@property (retain, nonatomic) NSTimer *showBubbleTimer;
@property (nonatomic) BOOL guideShowing;
@property (weak, nonatomic) IESLiveAnchorVRGuideView *guideView;
@property (retain, nonatomic) HTSLiveToolbarItem *fishEyeCloseItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)dismissGuideView;
- (void)showVRPreviewGuideBubble:(id)a0;
- (void)showLinkVRLiveGuideView:(id /* block */)a0;
- (void)trackLiveCloseAction;
- (void).cxx_destruct;

@end

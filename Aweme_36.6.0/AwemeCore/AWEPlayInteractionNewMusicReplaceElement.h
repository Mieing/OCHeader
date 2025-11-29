@class NSString, AWEElementContainer, AWEReplaceMusicReportView;

@interface AWEPlayInteractionNewMusicReplaceElement : AWEPlayInteractionNewBottomElement <AWEPlayInteractionNewMusicReplaceElementProtocol>

@property (retain, nonatomic) AWEElementContainer *leftContainer;
@property (retain, nonatomic) AWEElementContainer *rightContainer;
@property (retain, nonatomic) AWEReplaceMusicReportView *replaceMusicView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initializeElement;
- (unsigned long long)elementVisibleType;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)updateReplaceMusicPanelView;
- (void)layoutMusicReplacePanel;
- (void)foldAnimationForMusicReplacePanel;
- (void)foldReplaceMusicPanel;
- (void)startAudioReplacing;
- (void)addGestureForReplaceMusicPanel;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)identifier;

@end

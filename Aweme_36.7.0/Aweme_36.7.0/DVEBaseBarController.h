@class DVEVCContext, NSString, DVEBaseBarBottomView, UIView, NLETrackSlot_OC, DVEBaseBarTopView;
@protocol DVECoreVideoProtocol, DVEEditingRuntimeProtocol, DVECoreAudioProtocol, DVETrackEventProtocol, DVECoreActionServiceProtocol;

@interface DVEBaseBarController : UIViewController <DVEBaseBarBottomViewDelegate, DVEBaseBarTopViewDelegate, DVEBaseBarControllerProtocol>

@property (retain, nonatomic) UIView *loadingView;
@property (nonatomic) unsigned long long controllerStatus;
@property (weak, nonatomic) NLETrackSlot_OC *curSlot;
@property (nonatomic) BOOL isValueChanged;
@property (nonatomic) BOOL isEntire;
@property (nonatomic) float value;
@property (weak, nonatomic) id<DVEEditingRuntimeProtocol> editingContext;
@property (nonatomic) BOOL isDismissAnimating;
@property (nonatomic) BOOL isShowAnimating;
@property (weak, nonatomic) id<DVECoreVideoProtocol> videoEditor;
@property (weak, nonatomic) id<DVECoreAudioProtocol> audioEditor;
@property (weak, nonatomic) id<DVECoreActionServiceProtocol> actionService;
@property (nonatomic) BOOL isMainTrack;
@property (retain, nonatomic) NLETrackSlot_OC *editingSlot;
@property (weak, nonatomic) DVEVCContext *vcContext;
@property (retain, nonatomic) NSString *originalSlotId;
@property (readonly, nonatomic) NLETrackSlot_OC *originSlot;
@property (nonatomic) BOOL shouldHideBottomView;
@property (retain, nonatomic) DVEBaseBarBottomView *bottomView;
@property (retain, nonatomic) DVEBaseBarTopView *topView;
@property (retain, nonatomic) UIView *mainPanel;
@property (retain, nonatomic) UIView *errorView;
@property (retain, nonatomic) UIView *horizontalLine;
@property (retain, nonatomic) id<DVETrackEventProtocol> trackManager;
@property (nonatomic) unsigned long long valueType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)dismissWithType:(unsigned long long)a0;
- (void)saveEdit:(id /* block */)a0;
- (BOOL)isSupportAudioEdit;
- (id)myFirstAccessibilityElement;
- (void)topView:(id)a0 didClickCancelButton:(id)a1 resetHeadCompletion:(id /* block */)a2;
- (void)topView:(id)a0 didClickApplyButton:(id)a1;
- (id)updateCurSlot;
- (void)didClickedApplyToAllView:(id)a0;
- (unsigned long long)configPreViewTypeForSlot:(id)a0;
- (void)p_buildBaseBarControllerLayout;
- (void)updateBottomStyle;
- (void)reloadMainPanel:(id)a0;
- (void)reloadMainPanel;
- (void)setBarControllerStatus:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;
- (void)setLoadingText:(id)a0;
- (double)viewHeight;
- (BOOL)showFromViewController:(id)a0;

@end

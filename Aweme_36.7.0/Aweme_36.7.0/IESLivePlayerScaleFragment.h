@class IESLivePlayerScaleConfig, NSArray, NSString, UIView, HTSLiveAmazingBackgroundView, UITapGestureRecognizer;

@interface IESLivePlayerScaleFragment : IESLiveRoomComponent <IESLiveFIFAPlayerScaleRouter>

@property (nonatomic) BOOL isPanelOpened;
@property (nonatomic) BOOL needTopSafrArea;
@property (nonatomic) long long currentPanelWidthType;
@property (nonatomic) long long currentPanelStatus;
@property (retain, nonatomic) UIView *rightPanelView;
@property (copy, nonatomic) id /* block */ openPanelAnimalComplete;
@property (copy, nonatomic) id /* block */ closePanelAnimalComplete;
@property (copy, nonatomic) id /* block */ finishedPanelAnimalComplete;
@property (weak, nonatomic) UIView *targetPanelView;
@property (retain, nonatomic) HTSLiveAmazingBackgroundView *maskView;
@property (retain, nonatomic) UITapGestureRecognizer *tap;
@property (retain, nonatomic) UIView *accessView;
@property (nonatomic) double panelCustomWidth;
@property (retain, nonatomic) IESLivePlayerScaleConfig *currentConfig;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } currentPlayerLayout;
@property (nonatomic) BOOL isLandScapePanelV2Enable;
@property (retain, nonatomic) NSArray *openPuzzleUrlArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;
+ (BOOL)isMixed;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentUnmount;
- (void)componentOrientationTransitionBegin:(long long)a0;
- (void)componentOrientationChanged:(long long)a0;
- (BOOL)isInLinkmicScene;
- (void)addNotification;
- (void)p_refreshMask;
- (BOOL)enablePlayerScale;
- (long long)fifaPanelCurrentStatus;
- (long long)fifaOpenedType;
- (double)fifaOpenedWidth;
- (void)fifaOpenRightPanel:(long long)a0 contentView:(id)a1 openCompletion:(id /* block */)a2 closeCompletion:(id /* block */)a3;
- (void)fifaOpenRightPanel:(long long)a0 contentView:(id)a1 config:(id)a2 openCompletion:(id /* block */)a3 closeCompletion:(id /* block */)a4;
- (void)fifaCloseRightPanel:(id /* block */)a0;
- (void)saveCurrentPlayerLayoutData:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })currentPlayerLayoutData;
- (id)interfaceImpl;
- (void)handlePuzzleNotifation:(id)a0;
- (void)fifaOpenRightPanel:(long long)a0 contentView:(id)a1 config:(id)a2 isOpenFromPuzzleNoti:(BOOL)a3 openCompletion:(id /* block */)a4 closeCompletion:(id /* block */)a5;
- (void)p_panelAnimal:(BOOL)a0;
- (BOOL)needClosePanelFromPuzzleNoti:(id)a0;
- (void)updateRightBottomContainerWithStatus:(long long)a0;
- (void)fifaPanelAnimalComplete;
- (double)topSafeAreaHeight;
- (void)p_openRightPanel;
- (void)p_fifaOpenRightPanel:(double)a0 contentView:(id)a1 config:(id)a2 isOpenFromPuzzleNoti:(BOOL)a3 openCompletion:(id /* block */)a4 closeCompletion:(id /* block */)a5;
- (void)p_closeRightPanel;
- (void)p_clearBlocks;
- (void)showLandscapePanel;
- (void).cxx_destruct;
- (BOOL)isLandscape;

@end

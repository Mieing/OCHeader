@class WCFinderCreateLiveViewModel, NSString, WCLiveBottomTextButton, MMLiveCameraCastTipView, UIView, MMUIButton, MMLiveTaskId;
@protocol MMFinderCameraCastingStarterViewControllerDelegate;

@interface MMFinderCameraCastingStarterViewController : MMCPUIViewController <IMMFinderLiveCameraCastMgrExt, WCActionSheetDelegate>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) MMLiveCameraCastTipView *cameraCastTipView;
@property (retain, nonatomic) MMUIButton *miniWindowButton;
@property (retain, nonatomic) WCLiveBottomTextButton *cameraSwitchButton;
@property (retain, nonatomic) MMLiveTaskId *liveTaskId;
@property (retain, nonatomic) WCFinderCreateLiveViewModel *createLiveVM;
@property (weak, nonatomic) id<MMFinderCameraCastingStarterViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLiveTaskId:(id)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)initSubViews;
- (void)initTopSubViews;
- (void)initBottomSubViews;
- (void)layoutUI;
- (void)layoutTopButtons;
- (void)layoutBottomButtons;
- (id)liveTask;
- (id)topButtonImgNormalColor;
- (id)topButtonImgHighlightColor;
- (id)getMinimizeIconName;
- (id)currentLiveTask;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getCurrentMainVideoViewFrame;
- (double)getCurrentMainVideoViewMaxY;
- (BOOL)isPortrait;
- (void)updateItemsAfterSwitchCameraFinished;
- (void)delayResetSwitchCameraItemDisabled;
- (void)updateSwitchCameraItemDisabled:(BOOL)a0;
- (void)onClickCameraSwitchAction:(id)a0;
- (void)onCloseButtonClicked;
- (void)onMiniWindowButtonClicked;
- (void)onCameraCastResult:(long long)a0;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void).cxx_destruct;

@end

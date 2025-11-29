@class IESLiveGameOpenPlatformPanelToolViewModel, NSString, IESLiveOpenPlatformSonicLandscapeMorePanelView, IESLivePopupItem, IESLiveOpenPlatformSonicPortraitMorePanelView, IESLiveAnchorAudienceInteractiveGameModel;
@protocol IESLiveOpenPlatformMorePanelDelegate;

@interface IESLiveOpenPlatformSonicPanelModel : NSObject <IESLiveGameOpenPlatformPanelToolViewDataSource, IESLiveOpenPlatformSonicMorePanelViewDelegate>

@property (retain, nonatomic) IESLivePopupItem *popupItem;
@property (retain, nonatomic) IESLiveOpenPlatformSonicLandscapeMorePanelView *landscapeMorePanelView;
@property (retain, nonatomic) IESLiveOpenPlatformSonicPortraitMorePanelView *portraitMorePanelView;
@property (readonly, nonatomic) IESLiveAnchorAudienceInteractiveGameModel *gameModel;
@property (readonly, nonatomic) IESLiveGameOpenPlatformPanelToolViewModel *toolViewModel;
@property (weak, nonatomic) id<IESLiveOpenPlatformMorePanelDelegate> morePanelDelegate;
@property (nonatomic) unsigned long long moreItemStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)defaultPanelHeight;

- (double)panelHeight;
- (void)didSetAttachingDIContext;
- (void)didClickItem:(id)a0;
- (struct CGSize { double x0; double x1; })toolViewSize;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })toolViewEdges;
- (id)toolItems;
- (id)initWithGameModel:(id)a0 DIContext:(id)a1;
- (void)notifySonicPanelSwitchOrientation:(unsigned long long)a0 fromOrientation:(unsigned long long)a1;
- (void)didClickExitFunction;
- (void)showMorePanelWithHideCompletion:(id /* block */)a0;
- (void)resetShareScreenModel;
- (void)trackOpenPageMoreClickButton:(id)a0;
- (void)trackOpenPageMoreClickButtonWithTitle:(id)a0;
- (void).cxx_destruct;
- (void)setup;

@end

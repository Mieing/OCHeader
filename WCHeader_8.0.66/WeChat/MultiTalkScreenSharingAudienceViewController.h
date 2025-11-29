@class WCVideoOpenglRender, MultiTalkScreenSharingAudienceView, UIView, NSObject, MultiTalkBottomOperatePanel;
@protocol MultiTalkScreenSharingAudienceViewControllerDelegate, MultiTalkMemberProtocol;

@interface MultiTalkScreenSharingAudienceViewController : MMUIViewController <MultiTalkScreenSharingAudienceViewDelegate>

@property (retain, nonatomic) MultiTalkScreenSharingAudienceView *mainView;
@property (retain, nonatomic) UIView *bottomOperationPanelContainerView;
@property (retain, nonatomic) MultiTalkBottomOperatePanel *bottomOperatePanel;
@property (nonatomic) BOOL isEnable;
@property (retain, nonatomic) NSObject<MultiTalkMemberProtocol> *selectedMember;
@property (retain, nonatomic) WCVideoOpenglRender *selectedMemberVideoRender;
@property (retain, nonatomic) id videoMember;
@property (retain, nonatomic) UIView *selectedMemberCell;
@property (nonatomic) BOOL shouldHideBlurAfterAnimation;
@property (nonatomic) BOOL isLandscapeModeAllowed;
@property (nonatomic) long long lastInterfaceOrientation;
@property (weak, nonatomic) id<MultiTalkScreenSharingAudienceViewControllerDelegate> delegate;

- (void)handleScreenEdgePanGesture:(id)a0;
- (void)reloadMainViewIfNeed;
- (void)reloadBottomOperatePanelIfNeed;
- (void)reloadWithScene:(unsigned long long)a0;
- (void)reloadIfNeed;
- (void)presentInViewController:(id)a0 withSelectedMember:(id)a1 selectedMemberVideoRender:(id)a2 selectedMemberCell:(id)a3 videoMember:(id)a4 shouldHideBlurAfterAnimation:(BOOL)a5 bottomOperatePanel:(id)a6;
- (void)dismisswithSelectedMember:(id)a0 selectedMemberVideoRender:(id)a1 selectedMemberCell:(id)a2 videoMember:(id)a3 shouldHideBlurAfterAnimation:(BOOL)a4 completion:(id /* block */)a5;
- (void)updateTalkingMembersWithUsersName:(id)a0;
- (void)setupContentInterfaceOrientation:(long long)a0 width:(double)a1 height:(double)a2;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)sharingScreenAudienceViewDidClose:(id)a0;
- (void)sharingScreenAudienceView:(id)a0 didTapToChangeOperationViewsAppearance:(BOOL)a1;
- (void)sharingScreenAudienceViewDidOrientationManually:(id)a0;
- (void).cxx_destruct;

@end

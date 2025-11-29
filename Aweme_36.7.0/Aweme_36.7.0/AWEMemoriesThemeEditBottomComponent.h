@class ACCAnimatedButton, NSString, UIView;
@protocol ACCQuickStoryShareServiceProtocol, ACCStickerGestureComponentProtocol, ACCEditViewContainer, ACCVideoEditBottomControlService, ACCVideoEditAIMusicClipService, ACCEditServiceProtocol;

@interface AWEMemoriesThemeEditBottomComponent : ACCSecondaryPageComponent <ACCQuickStoryShareDelegate>

@property (weak, nonatomic) id<ACCStickerGestureComponentProtocol> stickerGestureComponent;
@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCVideoEditAIMusicClipService> aiMusicClipService;
@property (retain, nonatomic) id<ACCQuickStoryShareServiceProtocol> shareService;
@property (weak, nonatomic) id<ACCVideoEditBottomControlService> bottomControlService;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) ACCAnimatedButton *shareButton;
@property (retain, nonatomic) ACCAnimatedButton *publishButton;
@property (retain, nonatomic) ACCAnimatedButton *publishDiaryButton;
@property (nonatomic) BOOL isSupportShare;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMount;
- (void)shareButtonClicked:(id)a0;
- (double)subViewHeight;
- (id)subViewInHierarchy;
- (unsigned long long)secondaryPageComponentType;
- (void)shareServiceBackToHomePage;
- (void)shareServiceWillExecuteIMTask;
- (void)publishDiaryButtonClick:(id)a0;
- (void)shouldRespondGestureAction:(BOOL)a0;
- (void)publishButtonClicked:(id)a0;
- (void).cxx_destruct;
- (void)dismissWithCompletion:(id /* block */)a0;
- (void)setupUI;
- (double)bottomBarHeight;

@end

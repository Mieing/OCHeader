@class NSString, AWEPlayInteractionVideoAbstractView;

@interface AWEPlayInteractionVideoAbstractElement : AWEPlayInteractionLeftElement <AWEPlayInteractionComponentGlobalPriorityComponentProtocol, AWEPlayInteractionVideoAbstractElementProtocol>

@property (retain, nonatomic) AWEPlayInteractionVideoAbstractView *videoAbstractView;
@property (nonatomic) BOOL cancelShowCommentPanel;
@property (nonatomic) BOOL hasClicked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldActiveWithData:(id)a0 context:(id)a1;

- (void)viewController_willDisplay;
- (void)viewController_didEndDisplaying;
- (void)viewController_viewDidAppear;
- (void)viewController_viewDidDisappear;
- (void)shouldCancelShowCommentPanel;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (void)updateViewLayout;
- (void)openCommentPanelWithEnterSource:(unsigned long long)a0 delayTime:(double)a1;
- (void)videoAbstractViewClick;
- (void)updateSectionBtnWithPlayTime:(double)a0 completion:(id /* block */)a1;
- (void)trackVideoAbstractWithActionType:(id)a0;
- (void)trackVideoAbstractAppear;
- (void)handleClickEventWithPlayTime:(double)a0 playTimeStr:(id)a1;
- (void)trackVideoSummaryProgress;
- (void)trackClickCommentBtn;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end

@class UITapGestureRecognizer, AWEGradientView, AWELandscapeChapterEntranceView, NSString, UIView, AWEChapterKnowledgeDislikePanel, UIViewController;
@protocol AWEChapterPanelViewControllerProtocol;

@interface AWELandscapeChapterPanelController : AWELandscapeInteractionBaseController <UIGestureRecognizerDelegate, AWELandscapeChapterPanelControllerProtocol>

@property (retain, nonatomic) UIView *dismissView;
@property (retain, nonatomic) UIView *panelContainer;
@property (retain, nonatomic) UIView *effectView;
@property (retain, nonatomic) UIViewController<AWEChapterPanelViewControllerProtocol> *chapterViewController;
@property (retain, nonatomic) AWEChapterKnowledgeDislikePanel *dislikePanelController;
@property (nonatomic) BOOL isShowingChapterPanel;
@property (retain, nonatomic) UITapGestureRecognizer *tap;
@property (nonatomic) BOOL isShowingReminder;
@property (nonatomic) long long state;
@property (retain, nonatomic) AWEGradientView *gradientView;
@property (retain, nonatomic) AWELandscapeChapterEntranceView *chapterEntranceView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)player:(id)a0 updatePlayTime:(double)a1 canPlayTime:(double)a2 totalTime:(double)a3;
- (id)getCurrentPlayedTime;
- (void)jumpToSelectedChapter:(id)a0;
- (void)didChangeChapterProgressState:(BOOL)a0;
- (void)businessCustomCloseAction;
- (void)hideAllPanels;
- (BOOL)shouldResponseRecognizer:(id)a0;
- (BOOL)handleResponseGestureRecognizer:(id)a0;
- (void)showReminderTips:(BOOL)a0;
- (void)showChapterPanelWithCompletion:(id /* block */)a0;
- (id)createChapterViewController;
- (id)createDislikeViewController;
- (void)showChapterKnowledgeDislikePanelWithModel:(id)a0 context:(id)a1 chapterIndex:(long long)a2 knowledgeIndex:(long long)a3;
- (void)updateDislikePanelLayout;
- (void)handleClickDismissView:(id)a0;
- (void)trackShowChapterEntranceWithState:(long long)a0;
- (BOOL)isShowingChapterEntrance;
- (void)trackShowChapterEntranceOver;
- (void)dismissChapterPanel;
- (void)trackClickChapterEntranceWithState:(long long)a0;
- (BOOL)isShowingPanel;
- (void)updateState:(long long)a0;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)isInteracting;
- (void)viewDidLoad;
- (double)panelWidth;

@end

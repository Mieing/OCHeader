@class AWEVideoCoverEditorTextTemplateController, NSArray, ACCTextStickerView, NSString, AWEVideoPublishViewModel, DUXTabBar, DUXTabBarContainerController;
@protocol AWEVideoCoverEditorTextBaseProtocol, AWEVideoCoverEditorTextTemplateProtocol;

@interface AWEVideoCoverEditorTextTemplateCell : UIView <DUXTabBarContainerDelegate, AWEVideoCoverEditorTextTemplateControllerDelegate>

@property (retain, nonatomic) DUXTabBar *tabBar;
@property (retain, nonatomic) NSArray *tabItems;
@property (retain, nonatomic) DUXTabBarContainerController *tabBarContainerController;
@property (readonly, nonatomic) AWEVideoCoverEditorTextTemplateController *currentTextTemplateController;
@property (retain, nonatomic) AWEVideoCoverEditorTextTemplateController *historyTextTemplateController;
@property (retain, nonatomic) AWEVideoCoverEditorTextTemplateController *hotTextTemplateController;
@property (nonatomic) BOOL hasAppear;
@property (retain, nonatomic) ACCTextStickerView *currentTextStickerView;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (weak, nonatomic) id<AWEVideoCoverEditorTextBaseProtocol, AWEVideoCoverEditorTextTemplateProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableHistory;

- (long long)numberOfControllers:(id)a0;
- (id)slidingViewController:(id)a0 viewControllerAtIndex:(long long)a1;
- (void)slidingViewController:(id)a0 didFinishTransitionFromPreviousIndex:(long long)a1 currentIndex:(long long)a2 transitionType:(long long)a3;
- (id)commonTrackParams;
- (id)initWithPublishModel:(id)a0;
- (void)scrollToSelectedTemplateWithStickerView:(id)a0;
- (void)clearSelectedTemplate;
- (void)trackChangeTextTemplateTab:(id)a0 enterTabType:(id)a1;
- (double)tabBarWidth;
- (id)createTemplateUIConfigWithIsHistory:(BOOL)a0;
- (void)videoCoverEditorTextTemplateController:(id)a0 didSelectSticker:(id)a1 extraParams:(id)a2;
- (void)videoCoverEditorTextTemplateController:(id)a0 didDeselectSticker:(id)a1;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)setupUI;

@end

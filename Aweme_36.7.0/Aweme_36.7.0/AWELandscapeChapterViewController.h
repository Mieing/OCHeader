@class AWELandscapePageContext, NSString, AWEAwemeModel, UIView, UIViewController;
@protocol AWEChapterPanelViewControllerProtocol, AWELandscapeSplitScreenContainerDelegate;

@interface AWELandscapeChapterViewController : UIViewController <AWEChapterKnowledgeDislikePanelDelegate>

@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UIView *effectView;
@property (retain, nonatomic) UIViewController<AWEChapterPanelViewControllerProtocol> *chapterViewController;
@property (weak, nonatomic) UIViewController *dislikePanelViewController;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWELandscapePageContext *pageContext;
@property (weak, nonatomic) id<AWELandscapeSplitScreenContainerDelegate> delegate;
@property (nonatomic) BOOL isShowingChapter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createContainerView;
- (id)createEffectView;
- (void)showDislikePanel;
- (void)dislikePanelDidDismiss;
- (id)initWithPageContext:(id)a0 delegate:(id)a1;
- (void).cxx_destruct;
- (void)didDismiss;
- (void)viewDidLoad;
- (void)updateWithModel:(id)a0;

@end

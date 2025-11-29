@class UIView, AWEVideoPublishChapterViewModel, ACCChapterPointsOverviewListView, ACCChapterPointsEditBottomView, ACCChapterPointsEditTopView, ACCChapterPointsTimeLineController, UIViewController, DVETrackPanelContext;
@protocol ACCChapterPointsEditTopViewDelegate, ACCChapterPointsOverviewListViewDelegate, ACCChapterPointsEditBottomViewDelegate;

@interface ACCChapterPointsEditController : NSObject

@property (weak, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) ACCChapterPointsEditBottomView *editBottomView;
@property (retain, nonatomic) ACCChapterPointsOverviewListView *chapterListView;
@property (retain, nonatomic) UIView *view;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) DVETrackPanelContext *trackPanelContext;
@property (retain, nonatomic) AWEVideoPublishChapterViewModel *chapterViewModel;
@property (retain, nonatomic) ACCChapterPointsEditTopView *topView;
@property (retain, nonatomic) ACCChapterPointsTimeLineController *chapterPointsTimeLineController;
@property (nonatomic) BOOL isUnfold;
@property (weak, nonatomic) id<ACCChapterPointsEditTopViewDelegate> editTopViewDelegate;
@property (weak, nonatomic) id<ACCChapterPointsEditBottomViewDelegate> editBottomViewDelegate;
@property (weak, nonatomic) id<ACCChapterPointsOverviewListViewDelegate> overviewListViewDelegate;

- (void)updateWithChapterViewModel:(id)a0;
- (void)updateTrackPanelContext:(id)a0;
- (void)deselectRowAtIndexPath;
- (id)initWithTrackPanelContext:(id)a0 viewController:(id)a1;
- (void)updateChapterPointsEditBottomStatus:(long long)a0;
- (void)p_setupUI;
- (double)contentHeight;
- (void)reloadData;
- (void)updateLayout;
- (void).cxx_destruct;
- (void)selectRowAtIndexPath:(id)a0 animated:(BOOL)a1 scrollPosition:(long long)a2;

@end

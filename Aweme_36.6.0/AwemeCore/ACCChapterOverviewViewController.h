@class UIView, AWEVideoPublishChapterViewModel, NSString, ACCChapterCenterLineView, ACCChapterTimeLineController, UIButton, UITableView, UIImageView, DVEVCContext, DVETrackPanelContext, UILabel;
@protocol ACCChapterOverviewMediaTimelineViewDelegate, ACCChapterVideoTrackPreviewTransitionDelegate;

@interface ACCChapterOverviewViewController : UIViewController <ACCChapterMediaTimelineViewDelegate, ACCChapterVideoTrackPreviewTransitionDelegate, UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) DVETrackPanelContext *trackPanelContext;
@property (retain, nonatomic) AWEVideoPublishChapterViewModel *chapterViewModel;
@property (retain, nonatomic) ACCChapterTimeLineController *timelineController;
@property (retain, nonatomic) UITableView *chapterTableView;
@property (retain, nonatomic) ACCChapterCenterLineView *playHead;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIView *closeArea;
@property (retain, nonatomic) UIButton *clearButton;
@property (retain, nonatomic) UIImageView *clearIcon;
@property (retain, nonatomic) UILabel *clearLabel;
@property (retain, nonatomic) UILabel *intelligentChapterLabel;
@property (nonatomic) double containerHeight;
@property (retain, nonatomic) UIButton *adjustButton;
@property (retain, nonatomic) UIButton *saveButton;
@property (weak, nonatomic) DVEVCContext *vcContext;
@property (weak, nonatomic) id<ACCChapterOverviewMediaTimelineViewDelegate> timelineDelegate;
@property (weak, nonatomic) id<ACCChapterVideoTrackPreviewTransitionDelegate> transitionDelegate;
@property (copy, nonatomic) id /* block */ overviewDidCloseBlock;
@property (nonatomic) BOOL showClearBtn;
@property (copy, nonatomic) id /* block */ clearAllChaptersBlock;
@property (copy, nonatomic) id /* block */ editBlock;
@property (copy, nonatomic) id /* block */ adjustBlock;
@property (copy, nonatomic) id /* block */ saveBlock;
@property (nonatomic) BOOL isIntelligentChapter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clearButtonAction:(id)a0;
- (void)didClickCloseButton:(id)a0;
- (void)timelineWillBeginDragging:(id)a0;
- (void)didSelectTransition:(id)a0;
- (void)didTapMediaTimeline;
- (id)p_createButtonWithTitle:(id)a0;
- (void)timeline:(id)a0 didChangeTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)timelineDidEndDecelerating:(id)a0;
- (void)timelineDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (BOOL)useIntelligentChapter;
- (BOOL)isAsynIntelligentChapterEnable;
- (void)tryAttachForTimeline:(id)a0;
- (void)adjustButtonAction:(id)a0;
- (void)saveButtonAction:(id)a0;
- (id)initWithTrackPanelContext:(id)a0;
- (void)updateWithChapterViewModel:(id)a0;
- (void)showOnVC:(id)a0 animations:(id /* block */)a1;
- (void)closeWithAnimations:(id /* block */)a0;
- (void)reloadData;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;

@end

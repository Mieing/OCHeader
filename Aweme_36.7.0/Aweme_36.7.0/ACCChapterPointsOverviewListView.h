@class AWEVideoPublishChapterViewModel, NSString, ACCChapterPointsOverviewCaptionHeader, NSIndexPath, UITableView;
@protocol ACCChapterPointsOverviewListViewDelegate;

@interface ACCChapterPointsOverviewListView : UIView <ACCChapterMediaTimelineViewDelegate, ACCChapterVideoTrackPreviewTransitionDelegate, UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) AWEVideoPublishChapterViewModel *chapterViewModel;
@property (retain, nonatomic) ACCChapterPointsOverviewCaptionHeader *header;
@property (retain, nonatomic) NSIndexPath *currentIndex;
@property (retain, nonatomic) UITableView *tableView;
@property (weak, nonatomic) id<ACCChapterPointsOverviewListViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hasChapterKnowledge;
- (id)initWithTrackPanelContext:(id)a0;
- (void)updateWithChapterViewModel:(id)a0;
- (void)deselectRowAtIndexPath;
- (double)calculateHeaderViewHeight;
- (double)heightForKnowledgeCellWithDetailModel:(id)a0;
- (double)heightForIndexPath:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)selectRowAtIndexPath:(id)a0 animated:(BOOL)a1 scrollPosition:(long long)a2;

@end

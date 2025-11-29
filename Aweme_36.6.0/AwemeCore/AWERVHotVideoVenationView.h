@class AWENewHotSpotEventResponseModel, NSArray, AWERVDetailPageContext, UITapGestureRecognizer, AWERelatedFeedHotSpot, NSString, AWERVHotVideoElementHeadView, UITableView, AWENewEventSingleTabListModel;

@interface AWERVHotVideoVenationView : UIView <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) AWERVHotVideoElementHeadView *headView;
@property (retain, nonatomic) AWERVDetailPageContext *pageContext;
@property (retain, nonatomic) UITableView *timelineTableView;
@property (copy, nonatomic) NSArray *eventNodeArray;
@property (retain, nonatomic) AWENewHotSpotEventResponseModel *response;
@property (retain, nonatomic) AWENewEventSingleTabListModel *singleTabModel;
@property (retain, nonatomic) AWERelatedFeedHotSpot *hotspot;
@property (retain, nonatomic) UITapGestureRecognizer *tapGes;
@property (copy, nonatomic) id /* block */ didSelectTrackBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pageContext:(id)a1;
- (void)configWithTimelineString:(id)a0 awemeModel:(id)a1 hotSpot:(id)a2;
- (BOOL)hasTimelineDetailPage;
- (void)onFooterClicked;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)setupUI;
- (double)tableViewHeight;

@end

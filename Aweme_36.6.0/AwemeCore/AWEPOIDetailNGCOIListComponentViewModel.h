@class AWEPOIDetailNGCOIListComponentView, NSArray, AWEPOIDetailNGPageContext, NSURL, NSString, AWEPOICOIItemModel;

@interface AWEPOIDetailNGCOIListComponentViewModel : DitoComponentViewModel <AWEPOIDetailNGListCellProtocol>

@property (weak, nonatomic) AWEPOIDetailNGPageContext *context;
@property (retain, nonatomic) AWEPOICOIItemModel *itemModel;
@property (nonatomic) BOOL hasRecordCOIPosition;
@property (weak, nonatomic) AWEPOIDetailNGCOIListComponentView *cell;
@property (retain, nonatomic) NSURL *coverImageURL;
@property (readonly, nonatomic) BOOL showAdTag;
@property (nonatomic) BOOL isFeedbackAppear;
@property (readonly, nonatomic) NSArray *titleGroup;
@property (readonly, nonatomic) NSArray *rateGroup;
@property (readonly, nonatomic) NSArray *subtitleGroup;
@property (readonly, nonatomic) NSArray *infoGroup;
@property (readonly, nonatomic) NSArray *thirdGroup;
@property (readonly, nonatomic) NSString *distanceString;
@property (readonly, nonatomic) NSArray *feedbacks;
@property (nonatomic) long long cellIndex;
@property (nonatomic) BOOL isFirst;
@property (nonatomic) BOOL isLast;
@property (nonatomic) long long modelIndex;
@property (nonatomic) long long awemeIndex;
@property (nonatomic) BOOL hasRemoved;
@property (nonatomic) BOOL hasTracked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)trackAdWithPOICOIData:(id)a0 context:(id /* block */)a1;

- (id)getScrollView;
- (void)bindStateAndAction;
- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)a0;
- (void)pageView:(id)a0 didScroll:(id)a1;
- (id)constData;
- (id)generalContext;
- (void)componentViewWillShow;
- (void)didTapContainerView:(id)a0;
- (void)didClickFeedbackItem:(id)a0 withEnterMethod:(id)a1;
- (void)didShowFeedbackWithEnterMethod:(id)a0;
- (void)hideFeedbackWithNotification:(id)a0;
- (void)tryRecordCOICount;
- (id)generalTrackerInfoForItemModel:(id)a0;
- (void)pageWillEndShow;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;
- (void)dealloc;

@end

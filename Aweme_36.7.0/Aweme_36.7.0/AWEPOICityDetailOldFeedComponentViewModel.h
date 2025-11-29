@class AWEPOICityDetailOldFeedComponentView, NSString, AWEAwemeModel;

@interface AWEPOICityDetailOldFeedComponentViewModel : DitoComponentViewModel <AWEPOISyncFeedExtensionGetModelProtocol, AWEPOIDetailNGViewModelZoomTransitionProtocol, AWEPOIDetailNGListCellProtocol>

@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (weak, nonatomic) AWEPOICityDetailOldFeedComponentView *cell;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long cellIndex;
@property (nonatomic) BOOL isFirst;
@property (nonatomic) BOOL isLast;
@property (nonatomic) long long modelIndex;
@property (nonatomic) long long awemeIndex;
@property (nonatomic) BOOL hasRemoved;
@property (nonatomic) BOOL hasTracked;

- (void)canEnterLiveRoom:(id /* block */)a0;
- (void)trackShow;
- (id)poiDetail;
- (id)zoomTransitionView;
- (id)getAwemeModel;
- (void)bindStateAndAction;
- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)a0;
- (id)constData;
- (id)generalContext;
- (void)componentViewDidCompleteShow;
- (id)syncFeedManager;
- (void)tryEnterLive;
- (void)tryEnterFeed;
- (long long)viewModelIndex;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })biserialCellFrame;
- (void)didTapVideo;
- (struct CGSize { double x0; double x1; })biserialAwemeSizeWithMaxWidth:(double)a0;
- (BOOL)hasAweme;
- (id)fullPageFeedExtension;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;
- (id)store;
- (BOOL)hasModel;
- (unsigned long long)indexInGroup;

@end

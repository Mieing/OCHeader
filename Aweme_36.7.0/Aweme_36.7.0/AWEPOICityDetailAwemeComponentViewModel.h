@class NSString, AWEPOICityDetailAwemeComponentView, AWEAwemeModel;

@interface AWEPOICityDetailAwemeComponentViewModel : DitoComponentViewModel <AWEPOISyncFeedExtensionGetModelProtocol, AWEPOIDetailNGViewModelZoomTransitionProtocol>

@property (nonatomic) BOOL hasTracked;
@property (nonatomic) double height;
@property (weak, nonatomic) AWEPOICityDetailAwemeComponentView *cell;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)canEnterLiveRoom:(id /* block */)a0;
- (id)poiDetail;
- (void)onAwemeDiggNotification:(id)a0;
- (id)zoomTransitionView;
- (id)getAwemeModel;
- (void)bindStateAndAction;
- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)a0;
- (id)constData;
- (id)generalContext;
- (id)trackParamsForAutoTrackWithEventName:(id)a0 params:(id)a1;
- (id)syncFeedManager;
- (void)didTapPOILabel;
- (void)didTapVideoContent;
- (double)labelContentHeightWithString:(id)a0 maxWidth:(double)a1;
- (void)tryEnterLive;
- (void)tryEnterFeed;
- (long long)viewModelIndex;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;
- (id)store;
- (unsigned long long)indexInGroup;

@end

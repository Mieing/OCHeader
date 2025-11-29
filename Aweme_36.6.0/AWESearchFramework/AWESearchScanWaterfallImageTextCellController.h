@class NSString;

@interface AWESearchScanWaterfallImageTextCellController : AWESearchScanWaterfallBaseCellController <AWESearchRichAlbumTransitionOuterContextProvider, AWEZoomTransitionOuterContextProvider, AWESearchPreferredTransitionProtocol, AWESearchCachalotCardViewProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 width:(double)a1;
+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;

- (id)zoomTransitionStartViewForOffset:(long long)a0;
- (id)logExtraDict;
- (id)searchTransitionProviderClassNameForContext:(id)a0;
- (void)trackShow;
- (void)componentWillDisplay;
- (void)trackClick;
- (void)didStartShowing;
- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (id)getInflowExtra;
- (void)gotoAlbumDetailPage;
- (void)cardSingleTapped:(id)a0;
- (id)getTrackBaseParams;
- (void)configAlbumDetailPageLoopAndSoundStateForPayload:(id)a0;
- (id)transitionContext;
- (id)navigationController;
- (id)componentView;
- (void)setupUI;
- (void)updateWithViewModel:(id)a0;
- (void)updateWithModel:(id)a0;

@end

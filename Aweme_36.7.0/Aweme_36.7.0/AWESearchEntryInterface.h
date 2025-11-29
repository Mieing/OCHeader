@class NSString;

@interface AWESearchEntryInterface : HTSService <AWESearchEntryInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isShowingSearchViewControllerWithTabType:(unsigned long long)a0;
- (BOOL)isShowingSearchViewController;
- (BOOL)isShowingMiddleViewWithController:(id)a0;
- (double)deviceScore;
- (id)anEpisodesView;
- (id)aTagView;
- (id)searchEntranceView;
- (id)searchEntranceViewWithEnterFrom:(id)a0 logExtraDict:(id)a1;
- (id)searchVideoUserGuideViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 logExtra:(id)a1;
- (id)searchFeedVideoUserGuideViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 logExtra:(id)a1;
- (id)searchVideoFeedMaskViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)searchInnerGuideRelatedRecommendViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 logExtra:(id)a1;
- (id)newAWESearchLiveStatusView;
- (Class)getAWESearchLiveStatusViewClass;
- (long long)feedSearchBarStyle;
- (id)searchFeedEntranceViewControllerName;
- (void)middlePageGuessTabTracker;
- (BOOL)enableMiddlePageDoubleColumn;
- (BOOL)fixDCScore;
- (Class)getSearchFilmTVEpisodesClass;
- (Class)getSearchVarietyEpisodeTableViewCellClass;
- (BOOL)openSchemaWithFeedbackAnchor:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 schemaUrl:(id)a1 topView:(id)a2;

@end

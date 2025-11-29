@class NSArray, NSString, AWESearchAnchorListModel;

@interface AWETemplateSearchViewModel : AWETemplateBaseViewModel <AWETemplateSearchViewActionProtocol, AWETemplateSearchViewModelProtocol>

@property (retain, nonatomic) AWESearchAnchorListModel *anchorModel;
@property (copy, nonatomic) NSArray *searchAnchorWordsModel;
@property (nonatomic) unsigned long long barClickType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldActiveWithData:(id)a0 scene:(unsigned long long)a1 context:(id)a2;
+ (BOOL)shouldActiveWithData:(id)a0 context:(id)a1 scene:(unsigned long long)a2 extraInfo:(id)a3;
+ (void)trackShowFailure:(id)a0 context:(id)a1;
+ (id)enterFromValueForTrackWithReferString:(id)a0 withExtraInfo:(id)a1;
+ (BOOL)isNearbyDoubleColInnerWithExtraInfo:(id)a0;
+ (id)enterFromSecondValueForTrackWithReferString:(id)a0 withExtraInfo:(id)a1;

- (id)initWithData:(id)a0 scene:(unsigned long long)a1 context:(id)a2;
- (id)paramsForTemplateViewTransfer;
- (void)viewDidTriggerActionWithSearchAnchorModel:(id)a0 type:(unsigned long long)a1;
- (id)enterFromValueForTrack;
- (id)enterFromSecondValueForTrack;
- (id)generateSchemaWithSearchAnchorModel:(id)a0;
- (id)initWithData:(id)a0 context:(id)a1 scene:(unsigned long long)a2 extraInfo:(id)a3;
- (id)paramsForTemplateViewShow;
- (id)paramsForTemplateViewClick;
- (void)viewTransfer:(id)a0 anchorModel:(id)a1;
- (id)generateURLStringWith:(id)a0 anchorModel:(id)a1;
- (id)clientEngineExtraForAweme:(id)a0;
- (id)getTextContentWithType:(long long)a0;
- (void)trackPanelViewShow;
- (void)trackPanelTrendingShowWith:(id)a0;
- (void)trackPanelCloseBtnClick;
- (void)trackPanelViewCloseWith:(double)a0;
- (void)trackPanelTrendingWordsClickWith:(id)a0 rank:(long long)a1;
- (id)trackPanelCommonParams;
- (id)trackTrendingCommonParams;
- (void)panelShowWith:(id)a0;
- (void)panelCloseWithType:(unsigned long long)a0 duration:(double)a1 interactType:(long long)a2;
- (void)panelWordDidClickWith:(id)a0 rank:(long long)a1;
- (id)getQueryValueFromURL:(id)a0 key:(id)a1;
- (void).cxx_destruct;

@end

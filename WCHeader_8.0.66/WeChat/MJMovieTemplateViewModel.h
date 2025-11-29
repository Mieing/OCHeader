@class OrderedDictionary, OMJPublisherSessionMetrics, MJPublisherContext;

@interface MJMovieTemplateViewModel : WCFinderVideoProducerViewModel

@property (retain, nonatomic) OrderedDictionary *showedTemplateListMap;
@property (retain, nonatomic) OMJPublisherSessionMetrics *publisherSessionMetrics;
@property (retain, nonatomic) MJPublisherContext *publisherContext;

- (id)initWithAssetInfoList:(id)a0 options:(id)a1;
- (void)didShowTemplate:(id)a0 atIndex:(long long)a1 fromBelonger:(long long)a2;
- (void)_reportExposeTemplate:(id)a0 atIndex:(long long)a1;
- (void)didSelectTemplate:(id)a0 atIndex:(long long)a1 fromBelonger:(long long)a2;
- (void)didSwitchBGM:(BOOL)a0 fromBelonger:(long long)a1;
- (void)didSwitchOST:(BOOL)a0 fromBelonger:(long long)a1;
- (void)didSelectMusic:(id)a0 atIndex:(long long)a1 fromBelonger:(long long)a2;
- (void)didEnterSearchingMusic;
- (void)didSelectMusicSearchResult:(id)a0 atIndex:(long long)a1;
- (void)didStartEditingSegmentWithTemplateInfo:(id)a0;
- (void)didExportWithTemplateInfo:(id)a0 musicInfo:(id)a1;
- (void).cxx_destruct;

@end

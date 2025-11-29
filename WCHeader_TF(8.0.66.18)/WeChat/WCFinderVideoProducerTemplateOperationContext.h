@class OrderedDictionary, WCFinderVideoProducerTemplatePlayingOperation, NSMutableArray;

@interface WCFinderVideoProducerTemplateOperationContext : NSObject

@property (nonatomic) long long belonger;
@property (retain, nonatomic) WCFinderVideoProducerTemplatePlayingOperation *currentTemplateOperation;
@property (retain, nonatomic) NSMutableArray *providedTemplateList;
@property (retain, nonatomic) OrderedDictionary *showedTemplateListMap;
@property (retain, nonatomic) NSMutableArray *templateOperationList;

- (id)initWithBelonger:(long long)a0;
- (void)dealloc;
- (BOOL)isActive;
- (void)didProvideTemplate:(id)a0;
- (void)didShowTemplate:(id)a0 atIndex:(long long)a1;
- (void)didSelectTemplate:(id)a0 atIndex:(long long)a1;
- (void)didStartPlayingSelectedTemplateWithDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)didStopPlayingSelectedTemplate;
- (void)didSwitchBGM:(BOOL)a0;
- (void)didSwitchOST:(BOOL)a0;
- (void)didCheckJumpToMJAppRegular:(long long)a0;
- (void)didClickLaunchMJApp;
- (void)didLaunchMJApp;
- (void)didShowMusic:(id)a0 atIndex:(long long)a1;
- (void)didSelectMusic:(id)a0 atIndex:(long long)a1;
- (void)didStartPlayingSelectedMusic;
- (void)didFetchExtRecommendMusicWithRequestID:(unsigned long long)a0;
- (void)didEnterSearchingMusic;
- (void)didExitSearchingMusic;
- (void)didSearchMusicByKey:(id)a0;
- (void)didShowMusicSearchResult:(id)a0 atIndex:(long long)a1;
- (void)didSelectMusicSearchResult:(id)a0 atIndex:(long long)a1;
- (void)didStartPlayingSelectedSearchResultMusic;
- (void)didStopPlayingMusicSearchResult;
- (void)didStartEditingSegmentWithTemplateInfo:(id)a0;
- (void)didStopEditingSegment;
- (void)didFinishEditingAsset:(id)a0 withClipSegment:(id)a1 atIndex:(long long)a2;
- (void)didCancelEditingAsset:(id)a0 withClipSegment:(id)a1 atIndex:(long long)a2;
- (void).cxx_destruct;

@end

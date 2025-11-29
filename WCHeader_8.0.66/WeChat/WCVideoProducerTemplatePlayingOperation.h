@class WCVideoProducerMusicPlayingOperation, OrderedDictionary, WCVideoProducerEditSegmentOperation, MJVideoTemplate, NSMutableArray, WCVideoProducerMusicSearchingOperation;

@interface WCVideoProducerTemplatePlayingOperation : WCVideoProducerBaseOperation

@property (retain, nonatomic) MJVideoTemplate *mjVideoTemplate;
@property (nonatomic) long long templateOrder;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } videoDuration;
@property (nonatomic) BOOL isBGMEnabled;
@property (nonatomic) BOOL isOSTEnabled;
@property (nonatomic) long long launchMJAppRegularChoice;
@property (nonatomic) BOOL isLaunchMJAppClicked;
@property (nonatomic) BOOL isLaunchMJAppSuccessfully;
@property (retain, nonatomic) NSMutableArray *musicPlayingOperationList;
@property (retain, nonatomic) NSMutableArray *musicSearchingOperationList;
@property (retain, nonatomic) NSMutableArray *editSegmentOperationList;
@property (retain, nonatomic) WCVideoProducerMusicPlayingOperation *currentMusicPlayingOperation;
@property (retain, nonatomic) WCVideoProducerMusicSearchingOperation *currentMusicSearchingOperation;
@property (retain, nonatomic) WCVideoProducerEditSegmentOperation *currentEditSegmentOperation;
@property (retain, nonatomic) OrderedDictionary *showedMusicListMap;
@property (nonatomic) unsigned long long fetchExtRecommendMusicRequestID;

- (id)genReportStrForMusicSearchKey;
- (id)genReportStrForMusicSearchResultSelectCount;
- (id)initWithTemplate:(id)a0 order:(long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)operationDidStart;
- (void)operationDidStop;
- (void)didSwitchBGM:(BOOL)a0;
- (void)didSwitchOST:(BOOL)a0;
- (void)didUpdateDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)getAllShowedMusicList;
- (void)didShowMusic:(id)a0 atIndex:(long long)a1;
- (void)didSelectMusic:(id)a0 atIndex:(long long)a1;
- (void)didStartPlayingSelectedMusic;
- (void)didFinishPlayingSelectedMusic;
- (void)didFetchExtRecommendMusicWithRequestID:(unsigned long long)a0;
- (void)didStartSearchingMusic;
- (void)didFinishSearchingMusic;
- (void)didRequestSearchingWithKey:(id)a0;
- (void)didShowSearchResultMusic:(id)a0 atIndex:(long long)a1;
- (void)didSelectSearchResultMusic:(id)a0 atIndex:(long long)a1;
- (void)didStartPlayingSelectedSearchResultMusic;
- (void)didStopPlayingSelectedSearchResultMusic;
- (void)didStartEditingSegmentWithTemplat:(id)a0;
- (void)didStopEditingSegment;
- (void)didFinishEditingAsset:(id)a0 withClipSegment:(id)a1 atIndex:(long long)a2;
- (void)didCancelEditingAsset:(id)a0 withClipSegment:(id)a1 atIndex:(long long)a2;
- (void)didCheckJumpToMJAppRegular:(long long)a0;
- (void)didClickLaunchMJApp;
- (void)didLaunchMJApp;
- (void).cxx_destruct;

@end

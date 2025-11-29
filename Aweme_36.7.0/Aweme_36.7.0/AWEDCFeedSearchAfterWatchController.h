@class NSString, NSMutableDictionary, AWEIndividualWordsResponseModel, AWEAwemeModel, NSMutableSet, NSIndexPath, AWEDCFeedBaseCellElement;
@protocol AWEHttpTask;

@interface AWEDCFeedSearchAfterWatchController : AWEDCFeedBaseController <AWEDCFeedEventAwemeDetailDelegate, AWEDCFeedEventFullPageFeedDelegate, AWELiveRoomMessage, AWEDCFeedEventElementLifeCycleProtocol, AWEDCFeedSearchAfterWatchControllerProtocol>

@property (retain, nonatomic) AWEAwemeModel *currentClickOuterModel;
@property (retain, nonatomic) NSIndexPath *currentClickIndexPath;
@property (retain, nonatomic) AWEIndividualWordsResponseModel *currentResponseModel;
@property (retain, nonatomic) AWEAwemeModel *currentWordAweme;
@property (weak, nonatomic) id<AWEHttpTask> currentRequestTask;
@property (weak, nonatomic) AWEDCFeedBaseCellElement *currentShowElement;
@property (retain, nonatomic) NSMutableDictionary *closeAwemeDict;
@property (nonatomic) double freezeTime;
@property (retain, nonatomic) NSMutableSet *closeSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)detailTableViewControllerWillExit:(id)a0 currentAwemeModel:(id)a1;
- (BOOL)canShow;
- (void)fullPageFeedViewDidDisappear:(id)a0;
- (void)containerCollectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)elementDidConfigData:(id)a0;
- (void)elementDidReset:(id)a0;
- (id)commonParams;
- (void)audienceQuitAllRoomWithSlideVC:(id)a0 player:(id)a1 context:(id)a2;
- (id)currentWordSourceModel;
- (void)showCurrentCellSearch;
- (void)removeCurrentSearchWordsElement;
- (void)showSearchAfterWatchViewIfNeeded:(id)a0;
- (void)hideSearchAfterWatchView:(id)a0;
- (void)closeSearchAfterWatchView;
- (void)clickSearchWithIndex:(long long)a0;
- (void)showSearchWithIndex:(long long)a0;
- (void)trackTrendingWords:(id)a0 position:(long long)a1 isShow:(BOOL)a2;
- (id)commonTrackParamsWithModel:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancelCurrentRequest;
- (void)containerViewDidLoad;

@end

@class IESLiveAnchorPFListItem, NSString, IESLiveAnchorPFLevelView, IESLiveAnchorPFLevelModel;

@interface IESLiveAnchorPFBizLevelProcess : IESLiveAnchorPFBaseProcess <IESLiveAnchorPFStateObserver, IESLiveAnchorPFListObserver, IESLiveAnchorDynamicClarityObserver>

@property (retain, nonatomic) IESLiveAnchorPFLevelView *levelView;
@property (retain, nonatomic) IESLiveAnchorPFLevelModel *levelModel;
@property (retain, nonatomic) IESLiveAnchorPFListItem *levelItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startProcess;
- (void)bindAction;
- (void)changeResolutionAtKey:(id)a0 toKey:(id)a1;
- (id)trackParamsForPFListViewShow;
- (void)pfListViewDidDisAppear;
- (id)pfService;
- (id)pfListService;
- (void)setupLevelModel;
- (void)setupLevelItem;
- (void)cleanLevelView;
- (void)updateVideoLevelModelSubTitle;
- (void)updateLevelViewIfNeeded;
- (void)updateLevelModelWithLevel:(long long)a0;
- (void)setupLevelView;
- (void)updateLevelView;
- (void)updateVideoLevelModelWithLevel:(long long)a0;
- (void)updateAudioLevelModelWithLevel:(long long)a0;
- (void)updateScreenshotLevelModelWithLevel:(long long)a0;
- (void)levelDidChange:(long long)a0;
- (void).cxx_destruct;

@end

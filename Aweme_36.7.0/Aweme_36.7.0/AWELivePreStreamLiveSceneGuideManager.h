@class AWEAwemeModel, NSLock, NSArray, NSString, NSMutableDictionary, NSDictionary, NSMutableArray, IESLiveInnerFeedBaseItemModel, IESLiveEnterRoomAisle;

@interface AWELivePreStreamLiveSceneGuideManager : NSObject <AWELiveRoomMessage, IESLiveTrackerDelegate, AWEFeedLiveTabViewControllerLifeCycleAction, IESLiveSceneGuideStrategyService, AWELivePitayaFeaturesProvider>

@property (retain, nonatomic) NSMutableDictionary *cachePitayaMessageData;
@property (retain, nonatomic) NSLock *lock;
@property (weak, nonatomic) AWEAwemeModel *aweme;
@property (weak, nonatomic) IESLiveEnterRoomAisle *roomAisle;
@property (weak, nonatomic) IESLiveInnerFeedBaseItemModel *mountItem;
@property (weak, nonatomic) IESLiveInnerFeedBaseItemModel *unmountItem;
@property (nonatomic) long long roomCount;
@property (retain, nonatomic) NSMutableArray *historyParams;
@property (nonatomic) long long recentHistoryCount;
@property (retain, nonatomic) NSArray *unshowParams;
@property (retain, nonatomic) NSDictionary *autoEnterParams;
@property (retain, nonatomic) NSMutableDictionary *featureHandlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)audienceQuitAllRoomWithSlideVC:(id)a0 player:(id)a1 context:(id)a2;
- (void)willCommitTrackEvent:(id)a0 params:(id)a1;
- (void)feedLiveTabWillAppear:(id)a0;
- (void)recordLiveAutoEnterData:(id)a0;
- (void)collectInfoWithAwemeModel:(id)a0;
- (void)innerFeedDidEnter;
- (void)innerFeedMountObject:(id)a0 atIndex:(long long)a1;
- (void)innerFeedUnMountObject:(id)a0 atIndex:(long long)a1;
- (id)getCharacterWithFeatures:(id)a0;
- (void)executeCallBackWithMessage:(id)a0;
- (BOOL)isEcomCart:(id)a0;
- (id)getCachePitayaMessageDataWithScene:(id)a0;
- (void)deleteCachePitayaMessageWithScene:(id)a0;
- (void)registerFeatureHandlers;
- (id)parseLiveTabParams;
- (id)parseRoomParams;
- (id)parseAnchorParams;
- (id)parseUserParams;
- (id)parseAwemeParams;
- (id)parseAutoEnterRoomParams;
- (id)parseHistoryRoomParams;
- (id)parseUnShowRoomParams;
- (void)cachePitayaMessageData:(id)a0;
- (id)parseRoomParamsWithRoom:(id)a0;
- (long long)roomType:(id)a0;
- (id)parseAnchorParamsWithRoom:(id)a0;
- (id)parseUnShowRoomParams:(id)a0;
- (id)parseHistoryRoomParam:(id)a0 duration:(double)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)currentRoom;

@end

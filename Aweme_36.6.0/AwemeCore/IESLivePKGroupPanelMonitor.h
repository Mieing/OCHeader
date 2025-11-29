@class NSMutableDictionary, NSMutableArray;
@protocol IESLiveRoomService;

@interface IESLivePKGroupPanelMonitor : NSObject

@property (retain, nonatomic) NSMutableDictionary *panelLoadDictionary;
@property (nonatomic) long long panelOpenCount;
@property (nonatomic) long long pullDownCount;
@property (nonatomic) BOOL hasInvite;
@property (retain, nonatomic) NSMutableArray *needCheckDataTypeArray;
@property (retain, nonatomic) NSMutableDictionary *firstTriggerDictionary;
@property (nonatomic) BOOL isFirstOpenPanel;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (nonatomic) long long showType;
@property (nonatomic) double lastShowTiming;
@property (nonatomic) long long followedCount;
@property (nonatomic) double notInteractiveRate;
@property (nonatomic) BOOL hasOpenPanel;

- (BOOL)isSingleTab;
- (void)allMonitorDataUpload:(long long)a0;
- (id)typePrefixByLoadType:(long long)a0;
- (void)trackPKGroupPanelLoad:(BOOL)a0;
- (id)initWithDIContext:(id)a0 roomModel:(id)a1;
- (void)recordPanelAreaLoadDuration:(long long)a0 areaType:(long long)a1;
- (void)recordPanelAreaLoadCacheSource:(long long)a0 areaType:(long long)a1;
- (void)updateMonitorDataAfterPanelDidAppear:(long long)a0;
- (void)trackPKFirstTrigger:(long long)a0;
- (void)updateGroupPanelShowType:(long long)a0;
- (void)trackFirstInvitedTapFormStartLive:(long long)a0 duration:(long long)a1;
- (void).cxx_destruct;
- (void)clean;

@end

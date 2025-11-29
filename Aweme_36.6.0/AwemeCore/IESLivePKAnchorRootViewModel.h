@class NSString, IESLivePKNormalPanelViewModel, HTSLivePKApi, RivalsRecommendResponse_TopTip;
@protocol IESLiveRoomService;

@interface IESLivePKAnchorRootViewModel : NSObject

@property (retain, nonatomic) HTSLivePKApi *api;
@property (retain, nonatomic) IESLivePKNormalPanelViewModel *normalPKPanelViewModel;
@property (nonatomic) BOOL showRedDot;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) RivalsRecommendResponse_TopTip *topTipInfo;
@property (retain, nonatomic) NSString *searchBarString;
@property (retain, nonatomic) NSString *tabName;
@property (readonly, nonatomic) BOOL couldRefreshPanel;
@property (nonatomic) long long tabType;

- (void)requestBattleRivalsWithEntrance:(unsigned long long)a0 lastTabName:(id)a1 tabType:(int)a2 recommendSelectType:(int)a3 loadType:(long long)a4 isFirst:(BOOL)a5 requestSource:(id)a6 requestReason:(unsigned long long)a7 activityId:(id)a8 callback:(id /* block */)a9;
- (id)initWithDIContext:(id)a0 room:(id)a1;
- (void)updatePKDurationIfNeeded;
- (void)fetchPanelData:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)updateViewModelWithResponse:(id)a0 loadType:(long long)a1 completion:(id /* block */)a2;
- (BOOL)needShowTopTipsForPeakDuration;
- (void)updateNewStyleViewModelWithResponse:(id)a0 loadType:(long long)a1 completion:(id /* block */)a2;
- (BOOL)shouldUseTemporaryPKDuration;
- (void).cxx_destruct;
- (BOOL)hasActivity;
- (void)clean;

@end

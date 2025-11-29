@class NSString, NSMutableDictionary, AWESearchVideoExperienceTrackStateMachine, AWEAwemeModel, NSDictionary;

@interface AWESearchVideoExperienceStatisticsUtil : NSObject <AWESearchVideoExperienceTrackStateMachineDelegate>

@property (retain, nonatomic) AWESearchVideoExperienceTrackStateMachine *playerMachine;
@property (retain, nonatomic) NSString *curPlayerScene;
@property (nonatomic) double startTime;
@property (retain, nonatomic) NSString *awemeItemId;
@property (nonatomic) long long awemeType;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) NSMutableDictionary *trackParams;
@property (retain, nonatomic) NSMutableDictionary *lynxCommonDic;
@property (retain, nonatomic) NSString *resumeAwemeId;
@property (retain, nonatomic) NSDictionary *resumeParams;
@property (retain, nonatomic) NSMutableDictionary *albumTrackModelMap;
@property (copy, nonatomic) id /* block */ playTimeBlock;
@property (nonatomic) BOOL updateID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)enableTrack;
- (void)startTrackWithScene:(id)a0 state:(unsigned long long)a1 awemeModel:(id)a2 extraDic:(id)a3;
- (void)trackWithScene:(id)a0 state:(unsigned long long)a1 awemeModel:(id)a2 extraDic:(id)a3;
- (void)addCommonDic:(id)a0;
- (void)endTrackWithScene:(id)a0 state:(unsigned long long)a1 extraDic:(id)a2;
- (void)startTrackWithScene:(id)a0 state:(unsigned long long)a1 awemeModel:(id)a2 removeLynxCommonDic:(BOOL)a3 extraDic:(id)a4;
- (void)endTrackWithScene:(id)a0 state:(unsigned long long)a1 awemeModel:(id)a2 extraDic:(id)a3;
- (void)trackErrorMsgForTag:(id)a0 targetState:(unsigned long long)a1;
- (void)startWithAlbumScene:(id)a0 state:(unsigned long long)a1 index:(unsigned long long)a2 startTime:(double)a3 awemeModel:(id)a4 extraDic:(id)a5;
- (id)albumTrackModel:(id)a0 index:(unsigned long long)a1;
- (void)forceAddDurationToTrack;
- (void)resetTrack:(BOOL)a0 forceResetAlbum:(BOOL)a1;
- (void)trackErrorMsgForTransition:(unsigned long long)a0;
- (void)removeAlbumMapWithAwemeId:(id)a0;
- (void)resetAlbumTrack;
- (void)videoResumePlay:(id)a0;
- (void)videoPlayFailed:(id)a0;
- (void)videoPlayStop:(id)a0;
- (void)detailViewControllerDidAppear:(id)a0;
- (void)livePlayStateDidChange:(id)a0;
- (void)machine:(id)a0 didEnterState:(unsigned long long)a1 extraParams:(id)a2;
- (void)machine:(id)a0 transitionFailed:(unsigned long long)a1 extraParams:(id)a2;
- (void)trackWithScene:(id)a0 state:(unsigned long long)a1 extraDic:(id)a2;
- (void)videoStartPlay:(id)a0;
- (void)registerPlayTimeBlock:(id /* block */)a0;
- (void)addLynxCommonDic:(id)a0;
- (void)startTrackWithScene:(id)a0 state:(unsigned long long)a1 updateID:(BOOL)a2 extraDic:(id)a3;
- (void)startWithAlbumScene:(id)a0 state:(unsigned long long)a1 index:(unsigned long long)a2 awemeModel:(id)a3 extraDic:(id)a4;
- (void)trackWithAlbumScene:(id)a0 state:(unsigned long long)a1 index:(unsigned long long)a2 awemeModel:(id)a3 extraDic:(id)a4;
- (BOOL)isPlayerWaitingPlay;
- (void)trackWithScene:(id)a0 state:(unsigned long long)a1 videoTrackId:(id)a2 extraDic:(id)a3;
- (void)startTrackWithScene:(id)a0 state:(unsigned long long)a1 videoTrackId:(id)a2 extraDic:(id)a3;
- (void)endTrackWithScene:(id)a0 state:(unsigned long long)a1 videoTrackId:(id)a2 extraDic:(id)a3;
- (void)startLynxCardTrackWithScene:(id)a0 state:(unsigned long long)a1 awemeModel:(id)a2 extraDic:(id)a3;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)addObservers;
- (void)removeObservers;

@end

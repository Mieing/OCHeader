@class NSString, NSMutableDictionary;
@protocol IESLiveInteractiveSpatialAudioServiceDelegate;

@interface IESLiveInteractiveSpatialAudioServiceImpl : NSObject <IESLiveInteractionPlaymodeActions, IESLiveKTVActions, IESLiveInteractSmallWindowActions, IESLiveInteractiveSpatialAudioService>

@property (weak, nonatomic) id<IESLiveInteractiveSpatialAudioServiceDelegate> delegate;
@property (nonatomic) int uiLayout;
@property (nonatomic) BOOL isTeamFight;
@property (nonatomic) BOOL isVideoChallenge;
@property (nonatomic) BOOL enLargeGuest;
@property (nonatomic) BOOL isSmallWindow;
@property (copy, nonatomic) NSString *currentSingerUserID;
@property (retain, nonatomic) NSMutableDictionary *localLinkersPositionInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (BOOL)enableSpatialAudio;
- (void)interactionPlaymodeDidStart:(int)a0;
- (void)interactionPlaymodeDidEnd:(int)a0;
- (void)didUpdateKTVStageState:(unsigned long long)a0;
- (void)updateUiLayout:(int)a0;
- (void)updateSpatialPosition;
- (id)getSpatialListenerOrientation;
- (id)getSpatialListenerPosition;
- (id)getSpatialPositionInfoWithLinkMicId:(id)a0;
- (void)onInteractSmallWindowShowWithShowTrackDic:(id)a0 durationTrackDic:(id)a1;
- (void)onInteractReturnRoomWithShowTrackDic:(id)a0 durationTrackDic:(id)a1;
- (void)refreshWithPlayModes;
- (void)checkLayoutStauts;
- (BOOL)enableSpatialAudioWithScene:(long long)a0;
- (id)getSpatialListenerPositionFromScene:(long long)a0;
- (long long)getSpatialSceneFromLayout:(int)a0;
- (id)getSpatialListenerOrientationFromScene:(long long)a0;
- (long long)getPositionWithLayout:(int)a0 userId:(id)a1;
- (id)getPositionInfoWithLayout:(int)a0 hasJoinCount:(long long)a1 position:(long long)a2;
- (id)getOrientationWithDict:(id)a0 x:(long long)a1 y:(long long)a2 z:(long long)a3;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)dealloc;
- (int)currentLayout;

@end

@class NSString, NSArray, IESLiveMultiKTVSingChallengeApi, IESLiveKTVChallengeModel;

@interface IESLiveInteractKTVChallengeComponent : IESLiveInteractComponentBase <HTSLiveMessageSubscriber, IESLiveMultiKTVChallengeRouter, IESLiveKTVActions, IESLiveKTVChallengeModelDelegate, IESLiveMultiKTVChallengeActions, IESLiveKTVModeSwitchAction, HTSLiveRoomRemoteActions, IESLiveSocialInteractPreLoadExAction>

@property (retain, nonatomic) IESLiveMultiKTVSingChallengeApi *api;
@property (nonatomic) unsigned long long ktvState;
@property (nonatomic) unsigned long long midiScore;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (copy, nonatomic) NSString *openSource;
@property (copy, nonatomic) NSString *overPath;
@property (copy, nonatomic) NSArray *configList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) IESLiveKTVChallengeModel *challengeModel;

- (void)didSetAttachingDIContext;
- (void)currentServerLayoutDidChangedFrom:(id)a0 to:(id)a1;
- (void)didUpdateRoom:(id)a0 timeStamp:(id)a1;
- (BOOL)isChallengeOn;
- (void)openKTVChallengeFromSchema;
- (void)toggleChallengeEntranceWithSource:(id)a0;
- (void)didUpdateKTVStageState:(unsigned long long)a0;
- (void)didStartKTVWithPlayMode:(int)a0;
- (void)didEndKTVWithPlayMode:(int)a0;
- (BOOL)enableChallenge;
- (BOOL)shouldShowChallengeYellowDot;
- (void)openKTVChallengeFromStartLive;
- (void)showLaunchPanelWithSource:(id)a0;
- (void)fetchLaunchOptionWithCompletion:(id /* block */)a0;
- (void)openChallengeWithChallengeType:(int)a0 target:(unsigned long long)a1;
- (void)closeChallengeWithCompletion:(id /* block */)a0;
- (void)reportMidiScore:(unsigned long long)a0 recordHighScore:(BOOL)a1;
- (id)dictForTrack;
- (BOOL)isKTVChallengeOn;
- (id)typeStringWithChallengeType:(int)a0;
- (BOOL)isDiyTarget:(unsigned long long)a0 challengeType:(int)a1;
- (void)autoStartChallengeIfNeeded;
- (void)closeChallenge;
- (void)trackChallengeOpenSuccess;
- (void)trackChallengeOver;
- (void)performActionAfterKTVComponentStarted:(id /* block */)a0;
- (void)didKTVChallengeFail;
- (void)trackDidStartKTVWithParams:(id)a0;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;
- (BOOL)isOperator;

@end

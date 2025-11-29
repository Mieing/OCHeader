@class NSString;

@interface IESLiveAnchorFunctionMultiPlayerHandler : NSObject <IESLiveAnchorFunctionRegisterHandler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)handleInteractIDs;

- (BOOL)supportFunctionItem:(id)a0;
- (BOOL)shouldShowFunctionItem:(id)a0 localLiveSceneType:(unsigned long long)a1 interactiveScene:(unsigned long long)a2;
- (BOOL)functionItemIsRunning:(id)a0;
- (void)functionItemDidClick:(id)a0 clickFromButton:(BOOL)a1 params:(id)a2;
- (void)functionItemWillDisplay:(id)a0;
- (void)functionItemDidEndDisplay:(id)a0;
- (void)_goInteractiveEmoji:(id)a0 params:(id)a1;
- (void)_goKTV:(id)a0 params:(id)a1;
- (void)_goKTVRequestSong:(id)a0 params:(id)a1;
- (void)_goGuestBattle:(id)a0 params:(id)a1;
- (void)_goVirtualAvatar:(id)a0 params:(id)a1;
- (void)_goTeamFight:(id)a0 params:(id)a1;
- (void)_goMultiKTV:(id)a0 params:(id)a1;
- (void)_goPaidlinkmic:(id)a0 params:(id)a1;
- (void)_goRoomBattle:(id)a0 params:(id)a1;
- (void)_goSelfDiscipline:(id)a0 params:(id)a1;
- (void)_goMultiOrderSing:(id)a0 params:(id)a1;
- (void)_goCompetitionGame:(id)a0 params:(id)a1;
- (void)_goStarWish:(id)a0 params:(id)a1;
- (void)_goInteractActing:(id)a0 params:(id)a1;

@end

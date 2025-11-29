@class NSArray, NSMutableDictionary, IESLiveComponentContext;
@protocol IESLiveRoomService, IESLiveGameCleanDowngradeReactions;

@interface IESLiveGameCleanDowngradeStore : NSObject

@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) NSArray *clearScreenScenes;
@property (retain, nonatomic) NSMutableDictionary *takeEffectScenes;
@property (weak, nonatomic) id<IESLiveGameCleanDowngradeReactions> reactions;

- (BOOL)livePowerSaveClearEnable;
- (id)initWith:(id)a0 componentContext:(id)a1;
- (void)willShowPuzzleHybridPopController:(id)a0;
- (void)willDismissedPuzzleHybridPopController:(id)a0;
- (id)clearScreenCommonLog;
- (void)takeEffectScenesRemoveScene:(id)a0;
- (void)takeEffectScenesSetScene:(id)a0 clearType:(id)a1;
- (void)takeEffectScenesReset;
- (void)didReceivePuzzleHybridShowWithObject:(id)a0;
- (void)didReceivePuzzleHybridDismissedWithObject:(id)a0;
- (void).cxx_destruct;

@end

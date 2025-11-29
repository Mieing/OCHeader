@class IESLiveGameCleanDowngradeStore, NSString;

@interface IESLiveGameDowngradeFragment : IESLiveRoomComponent <IESLiveGameCleanDowngradeReactions>

@property (retain, nonatomic) IESLiveGameCleanDowngradeStore *cleanDowngradeStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)puzzleHybridPopControllerDismissedWithObject:(id)a0;
- (void)setPowerSaveClearType:(long long)a0 takeEffectUrl:(id)a1;
- (id)clearScreenCommonLog;
- (void)addPuzzleHybridObserver;
- (void)puzzleHybridPopControllerShowWithObject:(id)a0;
- (void)_clearScreenHandlePuzzleHybridShowWithObject:(id)a0;
- (void)_clearScreenHandlePuzzleHybridDismissedWithObject:(id)a0;
- (void)resetTakeEffectScenes;
- (void).cxx_destruct;
- (void)removeObserver;

@end

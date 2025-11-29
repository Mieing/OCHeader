@class NSString, AWEDetailPropViewModel, NSMutableSet, AWEDetailPropTracker, NSMutableArray;

@interface AWEDetailPropFollowServiceImpl : NSObject <AWEUserMessage, AWEDetailFollowService>

@property (weak, nonatomic) AWEDetailPropViewModel *stateContext;
@property (weak, nonatomic) AWEDetailPropTracker *tracker;
@property (retain, nonatomic) NSMutableSet *shownUserIDs;
@property (retain, nonatomic) NSMutableArray *profileModels;
@property (nonatomic) BOOL isFollowRequesting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (id)initWithStateContext:(id)a0 tracker:(id)a1;
- (BOOL)p_checkIfCanFollow;
- (void)p_updateFollowState:(long long)a0 userID:(id)a1;
- (id)p_getDesignerUserModel;
- (void)doFollowActionWithActionSender:(id)a0;
- (BOOL)shouldShowFollowButton;
- (void).cxx_destruct;
- (void)dealloc;

@end

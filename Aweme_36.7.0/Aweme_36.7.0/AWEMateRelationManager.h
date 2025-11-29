@class NSString;

@interface AWEMateRelationManager : NSObject <AWEMateRelationManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)applyMate:(id)a0;
+ (void)approveMate:(id)a0 completion:(id /* block */)a1;
+ (id)imageWithClipImage:(id)a0;
+ (void)p_showApplyMate:(id)a0;
+ (void)p_prepareSheetContext:(id)a0 completion:(id /* block */)a1;
+ (void)trackMateRelationPanel:(long long)a0 trackParams:(id)a1 actionType:(long long)a2 user:(id)a3;
+ (void)removeMateUser:(id)a0 scene:(id)a1 completion:(id /* block */)a2;
+ (void)trackFriendCancel:(long long)a0 trackParams:(id)a1 user:(id)a2;
+ (void)showMateRelation:(id)a0 operateType:(long long)a1 trackParams:(id)a2 primaryClickBlock:(id /* block */)a3 secondryClickBlock:(id /* block */)a4;
+ (id)titleTextWithOperateType:(long long)a0 nickname:(id)a1;
+ (id)detailTextWithOperateType:(long long)a0;
+ (id)primaryButtonTextWithOperateType:(long long)a0;
+ (void)p_getGroupName:(id)a0 timeout:(double)a1 completion:(id /* block */)a2;
+ (void)configureRelationSheetContext:(id)a0 params:(id)a1;
+ (void)removeMateWithUnFollow:(id)a0 scene:(id)a1 trackParams:(id)a2 unfollowBlock:(id /* block */)a3;
+ (void)removeFansAndRemoveMate:(id)a0 trackParams:(id)a1 removeFansBlock:(id /* block */)a2;
+ (void)unfollowAndRemoveMate:(id)a0 trackParams:(id)a1 unfollowBlock:(id /* block */)a2;
+ (void)blockUserAndRemoveMate:(id)a0 scene:(id)a1 trackParams:(id)a2 blockUserBlk:(id /* block */)a3;


@end

@class NSString, NSMutableSet;
@protocol IESLiveLinkmicTagCombined;

@interface IESLiveLinkmicTagServiceImpl : NSObject <IESLiveLinkmicTagService>

@property (retain, nonatomic) id<IESLiveLinkmicTagCombined> tagCombined;
@property (retain, nonatomic) NSMutableSet *honorBadgeSet;
@property (retain, nonatomic) NSMutableSet *liveRoleSet;
@property (retain, nonatomic) NSMutableSet *basicSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tagItemsByApplyedUser:(id)a0;
- (id)tagItemsByInviteUser:(id)a0;
- (id)extraTrackParmaWithBaseItems:(id)a0;
- (id)buildItems:(id)a0;
- (id)mergeBasicIdentity;
- (id)mergeLiveRole;
- (id)mergeHonorBadge;
- (void)registerTagClass:(Class)a0 category:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)init;

@end

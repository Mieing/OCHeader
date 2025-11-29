@class NSString;

@interface AWEDetailCommerceChallengeModel : AWEDetailCommonDiffableModel <IGListDiffable, AWEDetailRoutable>

@property (copy, nonatomic) NSString *challengeName;
@property (copy, nonatomic) NSString *challengeAvatarURLString;
@property (copy, nonatomic) NSString *challengeDescription;
@property (copy, nonatomic) NSString *challengeOpenURLString;
@property (copy, nonatomic) NSString *challengeID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)routeURLString;
- (void).cxx_destruct;

@end

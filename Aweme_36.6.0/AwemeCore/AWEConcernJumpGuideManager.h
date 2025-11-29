@class NSString;

@interface AWEConcernJumpGuideManager : NSObject

@property (copy, nonatomic) NSString *feedJumpFollowAuthorID;
@property (copy, nonatomic) NSString *feedJumpFollowItemID;

+ (id)sharedManager;

- (void)clearLastJumpInfo;
- (void)feedJumpFollowWithAuthorID:(id)a0 andItemID:(id)a1;
- (void).cxx_destruct;

@end

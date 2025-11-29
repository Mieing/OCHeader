@class NSArray;

@interface AWEIMRecommendInvitationUserDetailPresenterProps : AWEIMUIViewPresenterProps

@property (copy, nonatomic) NSArray *userIDs;
@property (copy, nonatomic) NSArray *selectedUserIDs;
@property (copy, nonatomic) id /* block */ selectedUserIDsChanged;

- (void).cxx_destruct;

@end

@class NSString;

@interface AWEUserMoodDetailComponent : AWEUserDetailBaseComponent <AFDProfileMessage, AWEUserMoodDetailProtocol>

@property (nonatomic) BOOL isLikeUserRequesting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishDiggProfileWithUser:(id)a0 isDigged:(BOOL)a1 error:(id)a2;
- (id)user;
- (void)viewDidLoad;
- (void)dealloc;
- (BOOL)isCurrentUser;
- (void)onInit;

@end

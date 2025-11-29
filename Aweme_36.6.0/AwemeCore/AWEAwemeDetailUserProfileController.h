@class NSString;

@interface AWEAwemeDetailUserProfileController : AWEAwemeNewDetailBaseController <AWEAwemeDetailUserProfileControllerProtocol>

@property (nonatomic) long long profileSessionID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateProfileDetailSessionID;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;

@end

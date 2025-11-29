@class NSString;

@interface AWEMVFollowInnerFilterController : AWEAwemeNewDetailBaseController <AWEUserMessage, AWEAwemeNewDetailTableControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)containerDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;

@end

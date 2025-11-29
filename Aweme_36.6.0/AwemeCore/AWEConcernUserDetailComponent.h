@class NSString;

@interface AWEConcernUserDetailComponent : AWEUserDetailBaseComponent <AWEUserMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSpecialFollowWithUser:(id)a0 error:(id)a1;
- (void)didCancelSpecialFollowWithUser:(id)a0 error:(id)a1;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)dealloc;

@end

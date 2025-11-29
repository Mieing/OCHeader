@class NSString;

@interface AWEStudioChallengeServiceImpl : NSObject <AWEStudioChallengeServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestChallengeItemWithID:(id)a0 isCommerce:(BOOL)a1 completion:(id /* block */)a2;
- (void)requestHashTagItemWithName:(id)a0 completion:(id /* block */)a1;
- (void)requestChallengeItemWithID:(id)a0 completion:(id /* block */)a1;

@end

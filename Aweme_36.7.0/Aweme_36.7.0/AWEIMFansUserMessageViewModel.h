@class NSString;

@interface AWEIMFansUserMessageViewModel : AWEIMFansBaseViewModel <AWEUserMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishApproveUserFollowRequest:(id)a0 error:(id)a1;
- (void)didFinishRejectUserFollowRequestWithNoticeID:(id)a0 user:(id)a1;
- (void)didFinishSetRemarkWithUser:(id)a0;
- (void)didFinishRemoveFansWithUser:(id)a0;
- (void)p_showPostWorkListAtIndex:(long long)a0 model:(id)a1;
- (void)refreshRowAtIndex:(long long)a0;
- (id)init;
- (void)dealloc;
- (void)addObservers;

@end

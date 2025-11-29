@class NSString;

@interface AWERecommendReasonDataProvider : AWESocialRelationDataProvider <AWEUserMessage, AWERecommendReasonDataProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)interceptor_readFromMemory:(id)a0;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (id)readFromMemory:(id)a0;
- (void)didDislikeUserWithContext:(id)a0 error:(id)a1;
- (BOOL)hasRecommendReason:(id)a0 scene:(id)a1;
- (BOOL)shouldShowLikeList:(id)a0 scene:(id)a1;
- (void)updateRecommendReasonOfUserFromUserCenter:(id)a0 privacyContext:(id)a1 scene:(id)a2;
- (void)deleteUser:(id)a0 action:(id)a1;
- (id)init;
- (id)identifier;
- (void)dealloc;

@end

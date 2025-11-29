@class NSString;

@interface AWELocalDataUserDataProvider : AWESocialRelationDataProvider <AWEUserMessage, AWELocalDataUserDataProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishSetRemarkWithUser:(id)a0;
- (void)didFinishRemoveFansWithUser:(id)a0;
- (void)updateWithProfileUser:(id)a0;
- (id)userIdWithSecUserId:(id)a0;
- (id)userIdsWithSecUserIds:(id)a0;
- (id)secUserIdWithUserId:(id)a0;
- (void)trackItemIsExisted:(BOOL)a0 scene:(id)a1;
- (id)init;
- (id)identifier;
- (void)dealloc;

@end

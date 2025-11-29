@class NSString;

@interface AWEPrivacyStateDataProvider : AWESocialRelationDataProvider <AWEUserMessage, AWEPrivacyStateDataProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)interceptor_readFromMemory:(id)a0;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishUnBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishHideMyPostFromUser:(id)a0 status:(long long)a1;
- (void)didFinishShowMyPostToUser:(id)a0 status:(long long)a1;
- (void)didFinishHidePostFromHer:(id)a0 status:(long long)a1;
- (void)didFinishUnHidePostFromHer:(id)a0 status:(long long)a1;
- (id)readFromMemory:(id)a0;
- (void)updatePrivacyTablesWithProfileUser:(id)a0;
- (void)doubleCheckAweme:(id)a0 response:(id)a1 enterFrom:(id)a2;
- (id)privacyTypeDictionary;
- (id)userExisted:(id)a0 privacyType:(unsigned long long)a1 scene:(id)a2;
- (void)operateWithTableName:(id)a0 profileUser:(id)a1;
- (void)insertModelWithUserID:(id)a0 tableName:(id)a1 action:(id)a2;
- (void)deleteModelWithUserID:(id)a0 tableName:(id)a1 action:(id)a2;
- (void)notifyPrivacyState:(BOOL)a0 userID:(id)a1 tableName:(id)a2;
- (id)init;
- (id)identifier;
- (void)dealloc;

@end

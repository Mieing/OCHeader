@interface AWEPzQueryTool : NSObject

+ (id)queryJournalRecordWithModel:(id)a0;
+ (id)queryComponentsWithScopes:(id)a0 excludedScopes:(id)a1;
+ (id)queryComponentsWithEngine:(id)a0 scopes:(id)a1 excludedScopes:(id)a2;
+ (id)queryComponentsWithEngine:(id)a0 scopes:(id)a1;
+ (id)p_limitScopesFromScopes:(id)a0 componentID:(id)a1;
+ (id)queryComponentsWithEngine:(id)a0 scope:(id)a1;
+ (id)p_queryComponentsInEngine:(id)a0 scope:(id)a1;
+ (id)queryComponentRecordWithModel:(id)a0 engine:(id)a1;

@end

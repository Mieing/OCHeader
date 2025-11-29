@class NSString;

@interface AWEShortCutSyncBlockRule : AWEExternalRouterBlockBaseRule

@property (retain, nonatomic) NSString *shortcutItemType;

- (BOOL)needBlockURLString:(id)a0 context:(id)a1 userActivity:(id)a2 linkSession:(id)a3;
- (id)syncHandleURLString:(id)a0 context:(id)a1 scene:(id)a2 linkSession:(id)a3;
- (void).cxx_destruct;
- (long long)ruleType;

@end

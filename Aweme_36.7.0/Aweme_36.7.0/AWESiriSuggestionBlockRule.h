@class NSUserActivity, NSString, AWESiriSuggestPayloadModel;

@interface AWESiriSuggestionBlockRule : AWEExternalRouterBlockBaseRule

@property (retain, nonatomic) AWESiriSuggestPayloadModel *siriPayload;
@property (retain, nonatomic) NSUserActivity *userActivity;
@property (copy, nonatomic) NSString *activityType;

+ (id /* block */)prepareBlockForWithURLString:(id)a0 context:(id)a1 linkSession:(id)a2;
+ (void)trackAdUnionLaunchIfNeeded:(id)a0 isSchema:(BOOL)a1;
+ (void)traceEnterSiriEvent:(id)a0;

- (BOOL)needBlockURLString:(id)a0 context:(id)a1 userActivity:(id)a2 linkSession:(id)a3;
- (id)syncHandleURLString:(id)a0 context:(id)a1 scene:(id)a2 linkSession:(id)a3;
- (BOOL)blockSiriSuggestion;
- (id)handleShoppingWithURLString:(id)a0 session:(id)a1 context:(id)a2 scene:(id)a3;
- (id)handleScanWithURLString:(id)a0 session:(id)a1 context:(id)a2 scene:(id)a3;
- (id)handleSettingsWithURLString:(id)a0 session:(id)a1 context:(id)a2 scene:(id)a3;
- (id)handlePrivateWithURLString:(id)a0 session:(id)a1 context:(id)a2 scene:(id)a3;
- (id)handleBroweWithURLString:(id)a0 session:(id)a1 context:(id)a2 scene:(id)a3;
- (id)handleHandoffWithURLString:(id)a0 session:(id)a1 context:(id)a2 scene:(id)a3;
- (void).cxx_destruct;
- (long long)ruleType;

@end

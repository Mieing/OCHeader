@class AWENearbyTransformerSessionTrackNode;

@interface AWENearbyTransformerSessionManager : NSObject

@property (retain, nonatomic) AWENearbyTransformerSessionTrackNode *homepageLife;
@property (retain, nonatomic) AWENearbyTransformerSessionTrackNode *homepageFresh;
@property (retain, nonatomic) AWENearbyTransformerSessionTrackNode *lifeDualIdpt;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)setRootSessionWithPageType:(long long)a0 type:(long long)a1 key:(id)a2 value:(id)a3;
- (id)getRootIDWithRootSessionID:(id)a0;
- (id)getSessionNodeWithSessionID:(id)a0 rootSession:(id)a1;
- (id)getDictFromType:(id)a0 node:(id)a1 origin:(BOOL)a2;
- (void)setDictFromType:(id)a0 node:(id)a1 dict:(id)a2;
- (id)getRootIDWithPageType:(long long)a0;
- (void)setDictWithNode:(id)a0 type:(long long)a1 key:(id)a2 value:(id)a3;
- (void)addDictWithNode:(id)a0 type:(long long)a1 params:(id)a2;
- (id)getTransformerWithPageType:(long long)a0;
- (id)changeTypeToString:(long long)a0;
- (id)getSessionWithSessionID:(id)a0 rootSessionID:(id)a1 type:(id)a2 key:(id)a3;
- (void)setSessionWithRootId:(id)a0 sessionId:(id)a1 parentSessionId:(id)a2 type:(id)a3 key:(id)a4 value:(id)a5;
- (void)setRootSessionWithPageType:(long long)a0 type:(long long)a1 params:(id)a2;
- (void)setTransformerSessionWithPageType:(long long)a0 type:(long long)a1 key:(id)a2 value:(id)a3;
- (void)setTransformerSessionWithPageType:(long long)a0 type:(long long)a1 params:(id)a2;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

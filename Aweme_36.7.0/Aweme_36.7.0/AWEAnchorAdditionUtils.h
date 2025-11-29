@interface AWEAnchorAdditionUtils : NSObject

+ (BOOL)hitOptimizeExperiment;
+ (void)trackItemShowWithModel:(id)a0 type:(long long)a1 isSearchMode:(BOOL)a2 index:(long long)a3 extraParams:(id)a4 event:(id)a5;
+ (void)trackIronManODRGuideShow:(BOOL)a0;
+ (void)trackPageShowWithType:(long long)a0 isSearchMode:(BOOL)a1;
+ (id)anchorDetailRouterWithType:(long long)a0 schema:(id)a1 anchorID:(id)a2 hasRecordBtn:(BOOL)a3;
+ (void)trackItemShowWithType:(long long)a0 model:(id)a1 isSearchMode:(BOOL)a2;
+ (id)anchorAdditionCellIdentifierWithType:(long long)a0 sectionType:(long long)a1;
+ (id)anchorAdditionCellIdentifierWithType:(long long)a0;
+ (void)trackClickWithType:(long long)a0 model:(id)a1 isSearchMode:(BOOL)a2;
+ (Class)anchorAdditionCellWithType:(long long)a0 sectionType:(long long)a1;
+ (Class)anchorAdditionCellWithType:(long long)a0;
+ (id)navigationBarTitleWithType:(long long)a0;
+ (id)searchPlaceholderTitleWithType:(long long)a0;
+ (void)enumerateAnchorAdditionCellWithType:(long long)a0 usingBlock:(id /* block */)a1;
+ (id)gameDetailRouterWithGameID:(id)a0 hasRecordBtn:(BOOL)a1;

@end

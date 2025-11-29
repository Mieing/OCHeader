@interface AWEDetailFeedABTests : NSObject

+ (BOOL)enableSlideDefaultConfig;
+ (BOOL)tableViewReuseEnable:(id)a0;
+ (BOOL)isTableViewCellGuardEnabled:(id)a0;
+ (BOOL)isTableViewCellCacheEnabled:(id)a0;
+ (id)tableViewFixMemoryBlockedIdentifiers;
+ (long long)tableViewFixMemoryBlockedType;
+ (BOOL)isTableViewCellGuardEnabledNewABTest:(id)a0;
+ (BOOL)isTableViewCellCacheEnabledNewABTest:(id)a0;
+ (id)tableViewFixMemoryBlockedIdentifiersNewABTest;
+ (long long)tableViewFixMemoryBlockedTypeNewABTest;
+ (BOOL)perf_pagingEnabled:(id)a0;
+ (BOOL)enableCellCacheFix;
+ (BOOL)enableContinuePlayForTransition;
+ (BOOL)enableSearchOptimizeLiveCloseRoom;

@end

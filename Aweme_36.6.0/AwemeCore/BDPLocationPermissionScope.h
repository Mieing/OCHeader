@class NSMutableArray;

@interface BDPLocationPermissionScope : BDPBasePermissionScope {
    NSMutableArray *_completionLists;
}

+ (void)bootstrapLaunch;
+ (id)sharedScope;

- (long long)freeType;
- (id)title:(id)a0;
- (unsigned long long)privacyScopeEnumName:(id)a0;
- (BOOL)isNeedRecorded;
- (BOOL)isCanCombine:(id)a0;
- (id)brief:(id)a0;
- (id)briefDesc:(id)a0;
- (id)desc:(id)a0;
- (void)forceRequestPermission:(id)a0 completion:(id /* block */)a1;
- (void)beforeAcquirePermission:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)eventName;
- (void)dealloc;

@end

@interface BDPPictureInPicturePermissionScope : BDPBasePermissionScope

+ (void)bootstrapLaunch;
+ (id)sharedScope;

- (long long)freeType;
- (id)title:(id)a0;
- (BOOL)isNeedRecorded;
- (BOOL)isCanCombine:(id)a0;
- (id)brief:(id)a0;
- (id)briefDesc:(id)a0;
- (id)desc:(id)a0;
- (id)eventName;

@end

@interface _AFURLSessionTaskSwizzling : NSObject

+ (void)swizzleResumeAndSuspendMethodForClass:(Class)a0;
+ (void)load;

- (void)af_resume;
- (void)af_suspend;
- (long long)state;

@end

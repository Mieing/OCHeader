@interface BU_AFURLSessionTaskSwizzling : NSObject

+ (void)swizzleResumeAndSuspendMethodForClass:(Class)a0;
+ (void)initialize;

- (void)bu_resume;
- (void)bu_suspend;
- (long long)state;

@end

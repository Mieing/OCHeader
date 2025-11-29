@interface _GAIAFunctionInfoData : GAIATask {
    struct _GAIAFunctionInfo { void *x0; char *x1; int x2; } *_functionInfoPointer;
}

@property (readonly, nonatomic) struct _GAIAFunctionInfo { void *x0; char *x1; int x2; } functionInfo;

- (void)startWithObject:(id)a0;
- (void)start;
- (id)initWithPointer:(const void *)a0;

@end

@interface _LynxFunction : LynxTask {
    const void *_function;
}

- (void)startWithObject:(id)a0;
- (void)start;
- (id)initWithPointer:(const void *)a0;

@end

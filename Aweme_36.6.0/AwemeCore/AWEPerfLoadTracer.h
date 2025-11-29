@interface AWEPerfLoadTracer : NSObject {
    BOOL reportEnabled;
}

+ (id)sharedTracer;
+ (BOOL)isEnabled;

- (id)beginWithName:(id)a0 builder:(id /* block */)a1;
- (void)reportTrace:(id)a0;
- (id)init;

@end

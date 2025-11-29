@class NSString;

@interface TIMXMachOFunction : NSObject <TIMXMachOExecutable> {
    void /* function */ *_function;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)executeWithRootObject:(id)a0;
- (id)initWithCPointer:(const void *)a0;

@end

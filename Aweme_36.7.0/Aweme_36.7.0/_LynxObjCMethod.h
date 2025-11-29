@interface _LynxObjCMethod : LynxTask {
    Class _class;
    SEL _selector;
}

@property (readonly, nonatomic) Class classOfMethod;
@property (readonly, nonatomic) SEL selector;

- (void)startWithObject:(id)a0;
- (void)start;
- (id)initWithPointer:(const void *)a0;

@end

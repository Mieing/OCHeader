@interface PuzzleObjCMethod : NSObject {
    Class _class;
    SEL _selector;
}

- (void)start;
- (id)initWithPointer:(const void *)a0;

@end

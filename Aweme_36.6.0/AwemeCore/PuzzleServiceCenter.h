@interface PuzzleServiceCenter : PuzzleBeanFactory

+ (void)initialize;
+ (id)sharedCenter;

- (id)prototypeObjectWithProtocol:(id)a0 context:(id)a1;
- (BOOL)bindClass:(Class)a0 forProtocol:(id)a1 context:(id)a2;
- (BOOL)bindObject:(id)a0 forProtocol:(id)a1 context:(id)a2;

@end

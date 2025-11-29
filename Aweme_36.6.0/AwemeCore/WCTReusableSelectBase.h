@interface WCTReusableSelectBase : WCTSelectBase

@property (nonatomic) BOOL reusable;

- (void)makeReusable;
- (BOOL)bindWithValue:(id)a0 atIndex:(int)a1;
- (BOOL)next;
- (void)reset;

@end

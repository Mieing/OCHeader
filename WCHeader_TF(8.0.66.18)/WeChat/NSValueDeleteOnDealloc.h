@class NSValue;

@interface NSValueDeleteOnDealloc : NSValue

@property (retain, nonatomic) NSValue *value;

- (void)dealloc;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;

@end

@interface TouchCallbackHolder : NSObject

@property (readonly, nonatomic) id target;
@property (readonly, nonatomic) SEL selector;

- (void).cxx_destruct;
- (id)initWithTarget:(id)a0 selector:(SEL)a1;

@end

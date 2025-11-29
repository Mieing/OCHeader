@protocol NSObject;

@interface AWEAnimationDelayInfo : NSObject

@property (weak, nonatomic) id<NSObject> identifier;
@property (copy, nonatomic) id /* block */ playBlock;

- (id)initWithPlayBlock:(id /* block */)a0 identifier:(id)a1;
- (void).cxx_destruct;

@end

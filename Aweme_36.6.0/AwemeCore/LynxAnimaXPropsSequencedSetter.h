@class NSMutableDictionary, AnimaXView;

@interface LynxAnimaXPropsSequencedSetter : NSObject

@property (retain, nonatomic) NSMutableDictionary *props;
@property (weak, nonatomic) AnimaXView *view;

+ (id)setterWithAnimaXView:(id)a0;

- (id)initWithAnimaXView:(id)a0;
- (id)resolveSrcFromProps:(id)a0;
- (void)setProp:(id)a0 withValue:(id)a1;
- (void)flush;
- (void).cxx_destruct;
- (void)reset;

@end

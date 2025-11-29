@interface POPAnimationValueEvent : POPAnimationEvent

@property (retain, nonatomic) id velocity;
@property (readonly, nonatomic) id value;

- (void)_appendDescription:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0 time:(double)a1 value:(id)a2;

@end

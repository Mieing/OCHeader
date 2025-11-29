@class CAMediaTimingFunction;

@interface POPBasicAnimation : POPPropertyAnimation

@property (nonatomic) double duration;
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction;

+ (id)linearAnimation;
+ (id)easeInAnimation;
+ (id)easeOutAnimation;
+ (id)easeInEaseOutAnimation;
+ (id)animationWithPropertyNamed:(id)a0;
+ (id)animation;
+ (id)defaultAnimation;

- (void)_appendDescription:(id)a0 debug:(BOOL)a1;
- (void)_initState;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

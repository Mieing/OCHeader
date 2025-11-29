@interface AnimaXValueCallback : NSObject

+ (struct shared_ptr<lynx::animax::AnimaXValueCallback> { struct AnimaXValueCallback *x0; struct __shared_weak_count *x1; })createNativeCallback:(id)a0 propertyType:(unsigned long long)a1;

- (id)getValueInternalWithStartFrame:(float)a0 endFrame:(float)a1 startValue:(id)a2 endValue:(id)a3 linearProgress:(float)a4 interpolatedProgress:(float)a5 overallProgress:(float)a6;
- (id)init;
- (id)getValue:(id)a0;

@end

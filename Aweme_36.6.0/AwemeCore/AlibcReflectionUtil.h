@interface AlibcReflectionUtil : NSObject

+ (id)getInstance:(id)a0 instanceMethodName:(id)a1;
+ (id)getSharedInstance:(id)a0;
+ (id)executeInstanceMethod:(id)a0 instance:(id)a1 params:(id)a2;
+ (id)executeInstanceMethod:(id)a0 instanceAndargs:(id)a1;
+ (id)executeClassMethod:(id)a0 clazz:(Class)a1;

@end

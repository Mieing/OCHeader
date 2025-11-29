@interface YataDeepCopy : NSObject

+ (id)mutableDeepCopyOfDict:(id)a0;
+ (id)immutableDeepCopyOfDict:(id)a0;
+ (id)mutableDeepCopyOfArray:(id)a0;
+ (id)immutableDeepCopyOfArray:(id)a0;
+ (id)mutableDeepCopyOfAny:(id)a0;
+ (id)immutableDeepCopyOfAny:(id)a0;

@end

@interface LyricHelper : NSObject

+ (long long)calStartLineNum:(id)a0 fromTime:(long long)a1;
+ (long long)calEndLineNum:(id)a0 fromTime:(long long)a1;
+ (BOOL)isIndexInRange:(id)a0 index:(long long)a1;
+ (id)getObjectInArray:(id)a0 byIndex:(unsigned long long)a1 ofClassType:(Class)a2 defaultValue:(id)a3;
+ (id)safeCastObject:(id)a0 toClass:(Class)a1;
+ (id)safeSubstring:(id)a0 toIndex:(unsigned long long)a1;
+ (id)safeSubstring:(id)a0 fromIndex:(unsigned long long)a1;
+ (id)safeSubstring:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end

@interface IESPortraitParseUtils : NSObject

+ (id)parse2Dictionary:(id)a0 defaultValue:(id)a1;
+ (BOOL)doCheck:(id)a0;
+ (id)JSONObjectFromString:(id)a0 error:(id *)a1;
+ (id)parseToString:(id)a0 defaultValue:(id)a1;
+ (id)JSONStringFromObject:(id)a0 error:(id *)a1;
+ (float)parse2Float:(id)a0 defaultValue:(float)a1;
+ (double)parse2Double:(id)a0 defaultValue:(double)a1;
+ (int)parse2Int:(id)a0 defaultValue:(int)a1;
+ (long long)parse2Long:(id)a0 defaultValue:(long long)a1;
+ (BOOL)parse2Bool:(id)a0 defaultValue:(BOOL)a1;
+ (id)parse2Array:(id)a0 defaultValue:(id)a1;
+ (id)parseToString:(id)a0;

@end

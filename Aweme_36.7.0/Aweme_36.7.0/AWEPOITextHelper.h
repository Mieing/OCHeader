@interface AWEPOITextHelper : NSObject

+ (double)getTextWidth:(id)a0 font:(id)a1;
+ (id)splitText:(id)a0 byMaxWidth:(double)a1 font:(id)a2;
+ (long long)fontWeightWithRawValue:(id)a0;
+ (double)getTextWidth:(id)a0 fontSize:(double)a1 fontWeight:(id)a2;
+ (id)splitText:(id)a0 byMaxWidth:(double)a1 fontSize:(double)a2 fontWeight:(id)a3;

@end

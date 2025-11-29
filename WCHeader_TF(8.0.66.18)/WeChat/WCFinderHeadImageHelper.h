@interface WCFinderHeadImageHelper : NSObject

+ (id)getSizeFormat;
+ (unsigned long long)sizeModeWithSizeStr:(id)a0;
+ (id)getTargetSizeStr:(unsigned long long)a0;
+ (id)getMultiresolutionFromURLString:(id)a0 targetSize:(unsigned long long)a1;
+ (BOOL)isPureNum:(id)a0;

@end

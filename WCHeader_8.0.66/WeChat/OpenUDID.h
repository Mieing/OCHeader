@interface OpenUDID : NSObject

+ (void)_setDict:(id)a0 forPasteboard:(id)a1;
+ (id)_getDictFromPasteboard:(id)a0;
+ (id)_generateFreshOpenUDID;
+ (id)value;
+ (id)valueWithError:(id *)a0;
+ (void)setOptOut:(BOOL)a0;

@end

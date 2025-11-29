@interface UTDIDOpenUDID : NSObject

+ (id)_getDictFromPasteboard:(id)a0;
+ (id)appUid;
+ (void)_setDict:(id)a0 forPasteboard:(id)a1;
+ (id)getUTDIDFromNSUserDefaults;
+ (id)getUTDIDFromUIPasteboard;
+ (id)_generateFreshOpenUDID;
+ (void)setOptOut:(BOOL)a0;
+ (id)valueWithError:(id *)a0;
+ (id)value;
+ (void)reset;

@end

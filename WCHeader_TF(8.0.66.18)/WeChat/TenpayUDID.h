@interface TenpayUDID : NSObject

+ (id)value;
+ (id)getUDIDInKeyChain;
+ (void)saveUDIDInKeyChain:(id)a0;
+ (id)generateFreshUDID;

@end

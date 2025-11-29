@interface BDNetworkTagManager : NSObject

+ (id)tagForType:(unsigned long long)a0;
+ (id)filterTagFromContext:(id)a0;
+ (id)autoTriggerTagInfo;
+ (id)manualTriggerTagInfo;
+ (void)disableTagCapacity:(BOOL)a0;
+ (BOOL)isNewUser;

@end

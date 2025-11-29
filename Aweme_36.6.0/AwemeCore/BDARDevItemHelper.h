@interface BDARDevItemHelper : NSObject

+ (double)screenLongEdge;
+ (double)screenShortEdge;
+ (BOOL)isDeviceEqualOrHighThanIphoneThreshold:(long long)a0 iPadThreshold:(long long)a1;
+ (BOOL)isHighDevItem;
+ (id)SSAppID;
+ (BOOL)isBiggerThanThreshold:(long long)a0 devItemName:(id)a1;
+ (id)devItemPlatform;
+ (BOOL)isSupportBytevc1DevItem;
+ (BOOL)isLocalTestEnv;
+ (id)scaleModeWithWidth:(double)a0 height:(double)a1;
+ (id)appIDWithDefaultValue:(id)a0;
+ (long long)objectfitToUIViewContentMode:(id)a0;

@end

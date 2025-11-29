@interface HMDProtectNonatomic : NSObject

+ (void)protectNonatomicConcurrentAccess;
+ (void)crashNonatomicConcurrentAccess;

@end

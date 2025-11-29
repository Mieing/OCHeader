@interface BDDyldNotification : NSObject

+ (void)markAppMachoImageWillLoad:(id)a0;
+ (void)markAppMachoImageDidLoadedFromCustom:(const struct mach_header { unsigned int x0; int x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; } *)a0 bundleName:(id)a1;
+ (void)addAppMachoImageLoadedListener:(void /* function */ *)a0;
+ (void)addSystemMachoImageLoadedListener:(void /* function */ *)a0;
+ (void)setup;

@end

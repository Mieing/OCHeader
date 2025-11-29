@interface BCAAMachOResolver : NSObject

+ (id)shareInstance;

- (void /* function */ *)getBundleEntryFunc:(id)a0;
- (struct mach_header_64 { unsigned int x0; int x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; } *)getBundleMachoHeader:(id)a0;
- (id)getClassServicesOfBundle:(id)a0;
- (id)getInstanceServicesOfBundle:(id)a0;
- (id)getBundleActivators:(id)a0;
- (id)getAllBundlesContainsEntryFunc;
- (id)getAllBundleNames;

@end

@class NSString, NSMutableSet;

@interface AWECodeRunnerObserver : NSObject <BCAABundleListener, AWECodeRunnerObserverProtocol>

@property (retain, nonatomic) NSMutableSet *processedMachoHeader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)checkIfMachoHeaderProcessed:(struct mach_header_64 { unsigned int x0; int x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; } *)a0 sectionName:(char *)a1;
+ (void)addProcessedMachoHeader:(struct mach_header_64 { unsigned int x0; int x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; } *)a0 sectionName:(char *)a1;
+ (id)sharedSingleton;

- (void)bundleDidActived:(id)a0 machoHeader:(struct mach_header_64 { unsigned int x0; int x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; } *)a1 fromBundle:(id)a2 enterTag:(id)a3 cost:(double)a4;
- (BOOL)checkIfMachoHeaderProcessed:(struct mach_header_64 { unsigned int x0; int x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; } *)a0 andSectionName:(char *)a1;
- (void)addProcessedMachoHeader:(struct mach_header_64 { unsigned int x0; int x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; } *)a0 andSectionName:(char *)a1;
- (void).cxx_destruct;
- (id)init;

@end

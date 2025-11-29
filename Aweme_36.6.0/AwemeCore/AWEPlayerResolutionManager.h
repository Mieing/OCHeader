@class NSString;

@interface AWEPlayerResolutionManager : NSObject <AWEPlayerResolutionManagerProtocol>

@property (nonatomic) unsigned long long cachedGearType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (unsigned long long)gearTypesForPreloadWithEnterFrom:(id)a0 inLandscape:(BOOL)a1;
- (unsigned long long)gearTypesFromDisk;
- (void)writeGearTypesToDisk:(unsigned long long)a0;
- (void)recordManualGearTypes:(unsigned long long)a0 enterFrom:(id)a1 model:(id)a2 inLandscape:(BOOL)a3;
- (unsigned long long)gearTypesWithEnterFrom:(id)a0 model:(id)a1 inLandscape:(BOOL)a2;
- (id)init;

@end

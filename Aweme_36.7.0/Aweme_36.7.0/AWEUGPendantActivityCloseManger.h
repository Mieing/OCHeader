@class NSMutableSet;

@interface AWEUGPendantActivityCloseManger : NSObject

@property (retain, nonatomic) NSMutableSet *closedMaterialIDSet;

+ (id)sharedInstance;

- (void)recordMaterialIDClosedThisColdLaunch:(id)a0;
- (BOOL)hasMaterialIDClosedThisColdLaunch:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

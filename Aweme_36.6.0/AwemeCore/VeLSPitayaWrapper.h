@interface VeLSPitayaWrapper : NSObject

+ (id)sharedInstance;

- (BOOL)isPitayaReady;
- (id)runSmartStrategy:(id)a0 strategyName:(id)a1;
- (void)initPitaya:(id)a0;

@end

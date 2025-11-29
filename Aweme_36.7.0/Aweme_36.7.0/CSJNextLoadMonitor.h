@class BUPersistence;

@interface CSJNextLoadMonitor : NSObject

@property (retain, nonatomic) BUPersistence *persistence;

+ (id)sharedInstance;

- (void)recordAdShowWithSlot:(id)a0 material:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end

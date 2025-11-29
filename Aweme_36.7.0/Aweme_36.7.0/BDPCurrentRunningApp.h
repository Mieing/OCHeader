@class BDPUniqueID;

@interface BDPCurrentRunningApp : NSObject

@property (retain, nonatomic) BDPUniqueID *currentUniqueID;

+ (id)sharedManager;

- (void).cxx_destruct;
- (BOOL)isDebugMode;

@end

@class BDTuringConfig, NSObject;
@protocol OS_dispatch_queue;

@interface BDAccountSealEvent : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain) BDTuringConfig *config;

+ (id)sharedInstance;

- (void)collectEvent:(id)a0 data:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end

@class BDECPigeonClientV2, NSDictionary;
@protocol BDECPigeonTrackerProtocol;

@interface BDECPigeonTrackerV2 : NSObject

@property (weak, nonatomic) BDECPigeonClientV2 *client;
@property (retain) id<BDECPigeonTrackerProtocol> appTracker;
@property (copy, nonatomic) NSDictionary *commonParams;

- (void)event:(id)a0 params:(id)a1;
- (void)event:(id)a0 params:(id)a1 ignoreEventPrefix:(BOOL)a2;
- (void).cxx_destruct;
- (id)initWithClient:(id)a0;

@end

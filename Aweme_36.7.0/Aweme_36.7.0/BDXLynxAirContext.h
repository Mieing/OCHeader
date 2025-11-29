@class BDXLynxAirDataCenter, NSMutableDictionary, BDXLynxAirScheduler, LynxView;

@interface BDXLynxAirContext : NSObject

@property (weak, nonatomic) LynxView *lynxView;
@property (weak, nonatomic) BDXLynxAirDataCenter *dataCenter;
@property (weak, nonatomic) BDXLynxAirScheduler *schedular;
@property (retain, nonatomic) NSMutableDictionary *sessionData;

- (void).cxx_destruct;
- (id)init;

@end

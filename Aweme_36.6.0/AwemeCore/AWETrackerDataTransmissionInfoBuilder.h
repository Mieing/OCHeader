@class AWETrackerDataTransmissionBlockConfig;

@interface AWETrackerDataTransmissionInfoBuilder : NSObject

@property (retain, nonatomic) AWETrackerDataTransmissionBlockConfig *config;

- (id)buildWithEvent:(id)a0 block:(id /* block */)a1;
- (void).cxx_destruct;
- (id)build;
- (id)init;
- (id)initWithConfig:(id)a0;

@end

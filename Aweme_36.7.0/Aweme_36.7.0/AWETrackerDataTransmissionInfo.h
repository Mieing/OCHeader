@class NSString, AWETrackerDataTransmissionBlockConfig;

@interface AWETrackerDataTransmissionInfo : NSObject

@property (retain, nonatomic) NSString *event;
@property (copy, nonatomic) id /* block */ block;
@property (nonatomic) BOOL isAttached;
@property (retain, nonatomic) AWETrackerDataTransmissionBlockConfig *config;

- (id)attachTo:(id)a0;
- (id)initWithEvent:(id)a0 withBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end

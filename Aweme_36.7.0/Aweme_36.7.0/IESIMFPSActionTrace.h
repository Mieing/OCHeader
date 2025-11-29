@interface IESIMFPSActionTrace : NSObject

@property (nonatomic) unsigned short frameID;
@property (nonatomic) unsigned int count;
@property (nonatomic) unsigned long long durationInUS;
@property (nonatomic) unsigned long long lastBeginTimeInUS;
@property (nonatomic) unsigned short nestCallCount;
@property (readonly, nonatomic) unsigned long long durationInMS;

+ (id)convertArrayToStringInTrack:(id)a0;

- (void)handleActionTraitDict:(id)a0;
- (void)handleFrameTraceTrait:(id)a0;
- (id)traitDict;
- (void)addFrameTrace:(id)a0;
- (void)end:(unsigned long long)a0;
- (void)begin:(unsigned long long)a0;
- (void)clean;

@end

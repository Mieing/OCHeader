@class NSString;

@interface ACCKaraokeTimeSlice : MTLModel <MTLJSONSerializing>

@property (nonatomic) double intervalStart;
@property (nonatomic) double intervalEnd;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithIntervalStart:(double)a0 intervalEnd:(double)a1;

@end

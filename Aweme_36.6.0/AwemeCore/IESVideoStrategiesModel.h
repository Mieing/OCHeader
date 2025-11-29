@class NSString;

@interface IESVideoStrategiesModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *startTimeInMin;
@property (retain, nonatomic) NSString *endTimeInMin;
@property (retain, nonatomic) NSString *peakTimeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

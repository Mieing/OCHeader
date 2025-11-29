@class NSArray, NSString;

@interface OHRSensorData : NSObject <OHRSensorData>

@property (nonatomic) long long dataUpdateTimeMs;
@property (retain, nonatomic) NSArray *accelerometerDataArray;
@property (retain, nonatomic) NSArray *gyroscopeDataArray;
@property (retain, nonatomic) NSArray *magnetometerDataArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end

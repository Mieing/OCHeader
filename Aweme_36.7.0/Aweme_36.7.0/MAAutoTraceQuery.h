@class NSArray, NSError;

@interface MAAutoTraceQuery : NSObject

@property (nonatomic) long long identifier;
@property (retain, nonatomic) NSArray *origLocations;
@property (retain, nonatomic) NSArray *tracePoints;
@property (nonatomic) double distance;
@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;

@end

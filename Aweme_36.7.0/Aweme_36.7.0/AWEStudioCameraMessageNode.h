@class NSNumber, NSError;

@interface AWEStudioCameraMessageNode : NSObject

@property (nonatomic) double baseTime;
@property (nonatomic) double messageActualReceivedTime;
@property (nonatomic) double messageActualTimeIntervalDate;
@property (retain, nonatomic) NSNumber *type;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) id params;

- (id)initWith:(id)a0 error:(id)a1 params:(id)a2 actualReceivedTime:(double)a3;
- (void).cxx_destruct;

@end

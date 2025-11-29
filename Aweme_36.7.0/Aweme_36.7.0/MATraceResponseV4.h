@class NSArray, MAV4Status, NSData, NSNumber;

@interface MATraceResponseV4 : NSObject

@property (retain, nonatomic) NSData *responseData;
@property (readonly, nonatomic) MAV4Status *status;
@property (readonly, nonatomic) NSArray *points;
@property (readonly, nonatomic) NSNumber *distance;

- (id)initWithResposeData:(id)a0;
- (void).cxx_destruct;
- (BOOL)isSuccess;

@end

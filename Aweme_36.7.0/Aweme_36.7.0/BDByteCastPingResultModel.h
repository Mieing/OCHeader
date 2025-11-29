@class NSString, NSArray;

@interface BDByteCastPingResultModel : NSObject

@property (copy, nonatomic) NSString *hostname;
@property (nonatomic) long long numberOfTransmitted;
@property (nonatomic) long long numberOfReceived;
@property (nonatomic) long long numberOfRepeats;
@property (nonatomic) double lossRate;
@property (nonatomic) long long numberOfReceivedTimeout;
@property (nonatomic) double minimumRoundTripTime;
@property (nonatomic) double maximumRoundTripTime;
@property (nonatomic) double averageRoundTripTime;
@property (nonatomic) double standardDeviation;
@property (copy, nonatomic) NSArray *fromAddresses;

+ (id)pingResultModelFrom:(struct BDByteCastPingResult { int x0; char *x1; long long x2; long long x3; long long x4; double x5; long long x6; double x7; double x8; double x9; double x10; struct in_addr { unsigned int x0; } x11[16]; int x12; })a0;

- (id)initWithCPingResult:(struct BDByteCastPingResult { int x0; char *x1; long long x2; long long x3; long long x4; double x5; long long x6; double x7; double x8; double x9; double x10; struct in_addr { unsigned int x0; } x11[16]; int x12; })a0;
- (void).cxx_destruct;
- (id)description;

@end

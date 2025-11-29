@class NSString;

@interface AWEPOITransportETA : NSObject

@property (nonatomic) long long transportType;
@property (copy, nonatomic) NSString *eta;
@property (nonatomic) double duration;

- (id)initWithType:(long long)a0 ETA:(id)a1 duration:(double)a2;
- (void).cxx_destruct;

@end

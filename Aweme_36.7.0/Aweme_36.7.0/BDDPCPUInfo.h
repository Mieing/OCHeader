@class NSString;

@interface BDDPCPUInfo : NSObject

@property (nonatomic) double pCpuUsage;
@property (nonatomic) long long pCpuTime;
@property (nonatomic) double mtCpuUsage;
@property (nonatomic) long long mtCpuTime;
@property (retain, nonatomic) NSString *mtSched;

- (void).cxx_destruct;
- (id)init;

@end

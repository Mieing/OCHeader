@class NSNumber, NSString;

@interface AWEShowPerformanceGetterImpl : NSObject <AWEShowPerformanceGetterProtocol>

@property (retain, nonatomic) NSNumber *cpuUsage;
@property (retain, nonatomic) NSNumber *memoryUsage;
@property (retain, nonatomic) NSNumber *gpuUsage;
@property (retain, nonatomic) NSNumber *bitrate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

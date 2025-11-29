@class NSNumber;
@protocol IESLiveClientAIInjector;

@interface IESLivePerformanceInstance : NSObject

@property (retain, nonatomic) id<IESLiveClientAIInjector> clientAIInjector;
@property (retain, nonatomic) NSNumber *processor;
@property (retain, nonatomic) NSNumber *cpu;
@property (retain, nonatomic) NSNumber *gpu;
@property (retain, nonatomic) NSNumber *mem;
@property (retain, nonatomic) NSNumber *battery;
@property (retain, nonatomic) NSNumber *batteryLevel;
@property (retain, nonatomic) NSNumber *batteryStatus;
@property (retain, nonatomic) NSNumber *temperature;
@property (retain, nonatomic) NSNumber *netQuality;
@property (retain, nonatomic) NSNumber *brightness;
@property (retain, nonatomic) NSNumber *ohr;
@property (retain, nonatomic) NSNumber *har;

- (id)initWithDIContext:(id)a0;
- (void)recordPerformanceFeature;
- (id)slidePerfMonitor;
- (id)recordPerformanceFeature2;
- (void).cxx_destruct;

@end

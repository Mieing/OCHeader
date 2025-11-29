@class NSNumber, NSString;

@interface IESLiveComponentPerformanceConfig : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *minCpu;
@property (retain, nonatomic) NSNumber *maxCpu;
@property (retain, nonatomic) NSNumber *minMemory;
@property (retain, nonatomic) NSNumber *maxMemory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

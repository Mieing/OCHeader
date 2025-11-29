@class NSArray, NSDictionary, NSString;

@interface AWEHomepageChannelEnterPerfMetricsMonitorEventConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) double repeatCallSceneDuration;
@property (nonatomic) BOOL sceneFPSRepresentationAll;
@property (retain, nonatomic) NSArray *sceneFPSRepresentation;
@property (retain, nonatomic) NSDictionary *sessionFPSTypeDic;
@property (retain, nonatomic) NSArray *sessionBaseFPSRepresentation;
@property (retain, nonatomic) NSArray *sessionDowngradeFPSRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

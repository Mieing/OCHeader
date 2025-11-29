@class NSDictionary, NSArray, NSString;

@interface AWEHomepageChannelChangePerfMetricsMonitorEventConfig : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSDictionary *sceneFPSEnableDic;
@property (nonatomic) BOOL sceneFPSRepresentationAll;
@property (retain, nonatomic) NSArray *sceneFPSRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

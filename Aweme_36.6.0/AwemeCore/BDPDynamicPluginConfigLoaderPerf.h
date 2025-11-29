@interface BDPDynamicPluginConfigLoaderPerf : NSObject

@property (nonatomic) double configReadDuration;
@property (nonatomic) double configMergeDuration;
@property (nonatomic) BOOL didEventStart;
@property (nonatomic) BOOL didEventResult;

@end

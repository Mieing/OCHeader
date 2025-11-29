@class NSString, NSDictionary;

@interface IESLivePlayerClarityStrategyInfo : NSObject

@property (nonatomic) long long qualityType;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *sdkKey;
@property (retain, nonatomic) NSString *resolution;
@property (retain, nonatomic) NSString *oldName;
@property (retain, nonatomic) NSString *oldSdkKey;
@property (retain, nonatomic) NSString *oldResolution;
@property (copy, nonatomic) NSString *displayResolutions;
@property (copy, nonatomic) NSDictionary *strategyInfo;

- (void).cxx_destruct;

@end

@class NSDictionary, NSString, NSArray;

@interface AWESearchImageFilterPluginConfig : NSObject

@property (retain, nonatomic) NSDictionary *settingsDict;
@property (retain, nonatomic) NSDictionary *frontendConfig;
@property (nonatomic) double scoreThreshold;
@property (nonatomic) unsigned long long prohibitedAdMinFileSize;
@property (nonatomic) unsigned long long prohibitedAdMaxFileSize;
@property (nonatomic) double prohibitedAdMinImageSide;
@property (nonatomic) long long adMaxImageSideForDownSample;
@property (copy, nonatomic) NSString *filterJS;
@property (retain, nonatomic) NSArray *noFilterHosts;
@property (retain, nonatomic) NSArray *noFilterHostSuffixes;
@property (readonly, nonatomic) BOOL enableClientAI;

- (void)fetchAdBlockSetting;
- (void).cxx_destruct;
- (id)init;

@end

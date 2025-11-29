@class NSString, CAKAlbumAIMemoriesFeatureConfig;

@interface CAKAlbumSearchFeatureConfig : NSObject

@property (nonatomic) long long scannedCountThreshold;
@property (nonatomic) double scannedcoverageThreshold;
@property (copy, nonatomic) NSString *defaultPlaceholder;
@property (nonatomic) unsigned long long defaultPlaceholderType;
@property (nonatomic) unsigned long long textParser;
@property (retain, nonatomic) CAKAlbumAIMemoriesFeatureConfig *AIMemoriesConfig;

- (void).cxx_destruct;

@end

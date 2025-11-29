@class NSString;

@interface LVExporterConfig : NSObject

@property (nonatomic) long long resolution;
@property (copy, nonatomic) NSString *metadataString;
@property (copy, nonatomic) NSString *artworkMetadataJsonString;
@property (nonatomic) int bitrate;
@property (copy, nonatomic) NSString *bitrateSetting;

+ (long long)supportResolutionForCurrentDevice;

- (void).cxx_destruct;
- (id)init;

@end

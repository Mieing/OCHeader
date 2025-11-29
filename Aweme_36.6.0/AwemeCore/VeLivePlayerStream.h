@class NSString;

@interface VeLivePlayerStream : NSObject

@property (copy, nonatomic) NSString *url;
@property (nonatomic) long long resolution;
@property (nonatomic) int bitrate;
@property (nonatomic) long long protocol;
@property (nonatomic) long long format;
@property (nonatomic) long long type;

+ (long long)veLiveFormatBytvlFormat:(id)a0;
+ (long long)veLiveProtocolBytvlProtocl:(id)a0;
+ (id)formatTypeFromURL:(id)a0;
+ (id)tvlResolutionByVeLivePlayerResolution:(long long)a0;
+ (id)tvlFormatByVeLivePlayerFormat:(long long)a0;
+ (id)tvlProtoclByVeLivePlayerProtocol:(long long)a0;
+ (id)tvlStreamTypeByVeLiveStreamType:(long long)a0;
+ (long long)veLiveResolutionBytvlResolution:(id)a0;
+ (long long)veLiveStreamTypeBytvlStreamType:(id)a0;
+ (id)protocolTypeFromURL:(id)a0;

- (BOOL)isStreamValid;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

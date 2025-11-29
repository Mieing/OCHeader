@class NSString;

@interface TPCommonParams : NSObject

@property (copy, nonatomic) NSString *flowId;
@property (copy, nonatomic) NSString *guid;
@property (nonatomic) long long seq;
@property (nonatomic) long long platformType;
@property (nonatomic) long long devType;
@property (nonatomic) long long networkType;
@property (copy, nonatomic) NSString *deviceName;
@property (copy, nonatomic) NSString *osVer;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *appVer;
@property (copy, nonatomic) NSString *playerVer;
@property (copy, nonatomic) NSString *reportProtocolVer;
@property (nonatomic) long long durationMs;
@property (nonatomic) long long hlsSourceType;
@property (nonatomic) long long playerType;
@property (nonatomic) long long urlProtocol;
@property (copy, nonatomic) NSString *containerFormat;
@property (nonatomic) long long videoEncodeFmt;
@property (nonatomic) long long audioEncodeFmt;
@property (nonatomic) long long subtitleEncodeFmt;
@property (nonatomic) long long streamBitrateKbps;
@property (nonatomic) float videoFrameRate;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *resolution;
@property (copy, nonatomic) NSString *dataTransportVer;
@property (nonatomic) long long speedKbps;
@property (nonatomic) long long useDataTransport;
@property (copy, nonatomic) NSString *dataTransportProtocolVer;
@property (copy, nonatomic) NSString *cdnUip;
@property (copy, nonatomic) NSString *cdnIp;
@property (nonatomic) long long platform;
@property (copy, nonatomic) NSString *playerConfig;
@property (nonatomic) long long drmAbility;

- (id)init;
- (void).cxx_destruct;

@end

@class NSString, NSDictionary;

@interface WASkylineRuntimeInfo : NSObject

@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *clientVersion;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *instanceId;
@property (nonatomic) unsigned long long appVersion;
@property (nonatomic) unsigned long long debugModeType;
@property (nonatomic) unsigned long long appServiceType;
@property (nonatomic) BOOL cronetEnable;
@property (nonatomic) BOOL cronetSimpleDiskCache;
@property (retain, nonatomic) NSString *cronetCachePath;
@property (nonatomic) BOOL enableResizeImage;
@property (nonatomic) BOOL enableNewSvgImage;
@property (retain, nonatomic) NSString *httpUserAgent;
@property (retain, nonatomic) NSString *httpReferer;
@property (retain, nonatomic) NSDictionary *performanceConfig;
@property (nonatomic) BOOL listenRootScrollViewChange;

- (void).cxx_destruct;

@end

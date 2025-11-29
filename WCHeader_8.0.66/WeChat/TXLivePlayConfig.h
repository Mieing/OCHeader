@class NSString, NSDictionary;

@interface TXLivePlayConfig : NSObject

@property (nonatomic) float cacheTime;
@property (nonatomic) BOOL bAutoAdjustCacheTime;
@property (nonatomic) float maxAutoAdjustCacheTime;
@property (nonatomic) float minAutoAdjustCacheTime;
@property (nonatomic) int videoBlockThreshold;
@property (nonatomic) int connectRetryCount;
@property (nonatomic) int connectRetryInterval;
@property (nonatomic) BOOL enableMessage;
@property (nonatomic) BOOL enableMetaData;
@property (copy, nonatomic) NSString *flvSessionKey;
@property (nonatomic) unsigned int playerPixelFormatType;
@property (retain) NSDictionary *headers;
@property (nonatomic) BOOL enableAEC;
@property (nonatomic) BOOL enableNearestIP;
@property (nonatomic) int rtmpChannelType;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end

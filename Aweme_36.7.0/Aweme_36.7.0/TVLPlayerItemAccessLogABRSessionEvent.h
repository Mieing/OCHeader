@class NSString;

@interface TVLPlayerItemAccessLogABRSessionEvent : TVLPlayerItemLogEvent

@property (copy, nonatomic) NSString *currentResolution;
@property (nonatomic) long long currentBitrate;
@property (copy, nonatomic) NSString *previousResolution;
@property (nonatomic) long long previousBitrate;
@property (nonatomic) unsigned long long startupType;
@property (nonatomic) long long switchCostInMilliseconds;
@property (nonatomic) long long stallCount;
@property (nonatomic) long long stallTime;

+ (id)ABRSessionWithStartupType:(unsigned long long)a0 switchCostInMilliseconds:(long long)a1 currentResolution:(id)a2 currentBitrate:(long long)a3 previousResolution:(id)a4 previousBitrate:(long long)a5;

- (id)logInfo;
- (void).cxx_destruct;

@end

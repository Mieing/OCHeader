@class NSString;

@interface AdEpisodeAwardInfoV2 : GPBMessage

@property (nonatomic) long long watchDuration;
@property (nonatomic) BOOL hasWatchDuration;
@property (copy, nonatomic) NSString *sendUniqId;
@property (nonatomic) BOOL hasSendUniqId;
@property (nonatomic) long long timestamp;
@property (nonatomic) BOOL hasTimestamp;
@property (copy, nonatomic) NSString *sign;
@property (nonatomic) BOOL hasSign;
@property (nonatomic) long long startTime;
@property (nonatomic) BOOL hasStartTime;
@property (nonatomic) long long endTime;
@property (nonatomic) BOOL hasEndTime;
@property (nonatomic) long long spuId;
@property (nonatomic) BOOL hasSpuId;
@property (nonatomic) long long skuId;
@property (nonatomic) BOOL hasSkuId;
@property (nonatomic) int bizType;
@property (nonatomic) BOOL hasBizType;
@property (copy, nonatomic) NSString *spuIdStr;
@property (nonatomic) BOOL hasSpuIdStr;
@property (copy, nonatomic) NSString *skuIdStr;
@property (nonatomic) BOOL hasSkuIdStr;

+ (id)descriptor;

@end

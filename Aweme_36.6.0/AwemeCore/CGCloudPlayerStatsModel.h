@interface CGCloudPlayerStatsModel : NSObject <NSCopying>

@property (nonatomic) long long targetBitrate;
@property (nonatomic) long long targetFrameRate;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

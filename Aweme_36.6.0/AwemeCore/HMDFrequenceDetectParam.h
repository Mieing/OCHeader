@interface HMDFrequenceDetectParam : NSObject <NSCopying>

@property (nonatomic) BOOL enabled;
@property (nonatomic) double duration;
@property (nonatomic) unsigned long long maxCount;
@property (nonatomic) double reportInterval;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

@class NSString, NSNumber;

@interface IESLiveInteractiveMotionDetectorGalileoCacheObject : NSObject <NSCoding, NSCopying>

@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSNumber *accelerameterThreshold;
@property (copy, nonatomic) NSNumber *shakeEndTimeIntervalThreshold;
@property (copy, nonatomic) NSNumber *updateTimeInterval;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

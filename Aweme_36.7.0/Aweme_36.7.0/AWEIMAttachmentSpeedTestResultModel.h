@class NSString, NSDate, NSNumber, NSError;

@interface AWEIMAttachmentSpeedTestResultModel : NSObject <NSCoding>

@property (copy, nonatomic) NSString *context;
@property (nonatomic) int speed;
@property (nonatomic) int speedThreshold;
@property (retain, nonatomic) NSNumber *customSliceSize;
@property (retain, nonatomic) NSNumber *customSocketNum;
@property (retain, nonatomic) NSDate *cacheDate;
@property (nonatomic) long long networkStatus;
@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

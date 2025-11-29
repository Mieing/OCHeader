@class NSString;

@interface AWEStudioSuperEntranceActivityTimeModel : AWEBaseApiModel <NSCoding>

@property (copy, nonatomic) NSString *startTimeString;
@property (copy, nonatomic) NSString *endTimeString;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (double)endTime;
- (BOOL)isEqualToModel:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (double)startTime;

@end

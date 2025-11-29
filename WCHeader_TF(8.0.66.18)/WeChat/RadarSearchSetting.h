@interface RadarSearchSetting : NSObject <NSCoding>

@property (nonatomic) int usrEduTimes;
@property (nonatomic) int enterRadarTimes;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

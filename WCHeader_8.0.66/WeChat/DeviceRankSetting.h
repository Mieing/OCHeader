@interface DeviceRankSetting : NSObject <NSCoding>

@property (nonatomic) unsigned int rankSettingFlag;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

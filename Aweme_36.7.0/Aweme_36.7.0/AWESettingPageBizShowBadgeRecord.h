@interface AWESettingPageBizShowBadgeRecord : NSObject

@property (nonatomic) long long continuousShowBadgeTimes;
@property (nonatomic) double latestShowBadgeTime;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

@class NSString;

@interface AWEFansPushNotificationModel : AWEBaseApiModel

@property (retain, nonatomic) NSString *content;
@property (nonatomic) long long unreadCount;
@property (nonatomic) long long blockUrgeSetting;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

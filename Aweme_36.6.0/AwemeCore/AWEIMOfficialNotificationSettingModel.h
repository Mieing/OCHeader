@class NSArray, NSString;

@interface AWEIMOfficialNotificationSettingModel : NSObject

@property (copy, nonatomic) NSArray *noticeSubscribes;
@property (copy, nonatomic) NSArray *noticeConfigs;
@property (nonatomic) BOOL isStickOnTop;
@property (nonatomic) BOOL canDisturb;
@property (nonatomic) BOOL disturb;
@property (nonatomic) BOOL foldStatus;
@property (nonatomic) long long group;
@property (copy, nonatomic) NSString *accountType;

- (void).cxx_destruct;

@end

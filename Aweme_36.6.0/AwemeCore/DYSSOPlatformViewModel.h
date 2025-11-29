@class NSString;

@interface DYSSOPlatformViewModel : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *accessibilityLabel;
@property (retain, nonatomic) NSString *imageName;
@property (nonatomic) unsigned long long platform;

+ (id)douyin;
+ (id)toutiao;
+ (id)apple;
+ (id)QQ;
+ (id)wechat;
+ (id)weibo;

- (void).cxx_destruct;

@end

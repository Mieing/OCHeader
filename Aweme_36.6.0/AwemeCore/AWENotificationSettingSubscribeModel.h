@class NSString;

@interface AWENotificationSettingSubscribeModel : NSObject

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *value;
@property (copy, nonatomic) NSString *icon;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end

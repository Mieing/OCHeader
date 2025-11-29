@class NSNumber, NSString;

@interface AWEPromoteSettings : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *enable;
@property (retain, nonatomic) NSNumber *popupLimit;
@property (retain, nonatomic) NSNumber *popupInterval;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *linkText;
@property (copy, nonatomic) NSString *popupURL;
@property (retain, nonatomic) NSNumber *clickType;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)confirmClickType;
- (void).cxx_destruct;

@end

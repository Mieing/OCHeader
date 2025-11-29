@class NSString;

@interface AWETopicDualShootButtonConfigModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *lightIcon;
@property (copy, nonatomic) NSString *darkIcon;
@property (copy, nonatomic) NSString *rightIcon;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

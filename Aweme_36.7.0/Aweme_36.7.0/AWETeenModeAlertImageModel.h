@class NSString;

@interface AWETeenModeAlertImageModel : AWEBaseApiModel

@property (retain, nonatomic) NSString *url;
@property (nonatomic) unsigned long long width;
@property (nonatomic) unsigned long long height;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithImageURLStr:(id)a0;
- (void).cxx_destruct;

@end

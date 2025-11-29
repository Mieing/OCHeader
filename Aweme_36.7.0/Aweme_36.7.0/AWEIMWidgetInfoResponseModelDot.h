@class NSString;

@interface AWEIMWidgetInfoResponseModelDot : AWEBaseApiModel

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *colorString;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

@class NSString;

@interface IESECGoodsDetailCustomButtonModel : IESECGoodsDetailButtonModel

@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *backgroundUrl;
@property (copy, nonatomic) NSString *textColor;
@property (nonatomic) unsigned long long customType;
@property (nonatomic) long long style;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

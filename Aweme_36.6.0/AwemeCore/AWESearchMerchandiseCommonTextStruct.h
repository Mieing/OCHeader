@class NSString;

@interface AWESearchMerchandiseCommonTextStruct : AWEBaseApiModel

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *textColor;
@property (nonatomic) long long textStyle;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

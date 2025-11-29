@class NSString, AWESearchMerchandiseAdLabelColor;

@interface AWESearchMerchandiseAdLabelStruct : AWEBaseApiModel

@property (nonatomic) long long textSize;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) AWESearchMerchandiseAdLabelColor *textColor;
@property (retain, nonatomic) AWESearchMerchandiseAdLabelColor *borderColor;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

@class NSString, AWESearchMerchandisePicConfig;

@interface AWESearchMerchandiseProductRightStruct : AWEBaseApiModel

@property (copy, nonatomic) NSString *firstTag;
@property (copy, nonatomic) NSString *secondTag;
@property (copy, nonatomic) NSString *borderColor;
@property (copy, nonatomic) NSString *textColor;
@property (copy, nonatomic) NSString *firstTagBackground;
@property (copy, nonatomic) NSString *secondTagBackground;
@property (copy, nonatomic) NSString *firstTagTextColor;
@property (copy, nonatomic) NSString *secondTagTextColor;
@property (copy, nonatomic) NSString *firstTagBorderColor;
@property (copy, nonatomic) NSString *secondTagBorderColor;
@property (copy, nonatomic) NSString *lineDivider;
@property (copy, nonatomic) NSString *lineDividerColor;
@property (nonatomic) long long style;
@property (copy, nonatomic) NSString *impression;
@property (nonatomic) long long textSize;
@property (retain, nonatomic) AWESearchMerchandisePicConfig *icon;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

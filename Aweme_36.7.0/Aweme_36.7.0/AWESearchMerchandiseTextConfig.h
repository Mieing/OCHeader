@class NSString, NSNumber, AWESearchMerchandiseBackgroundColor;

@interface AWESearchMerchandiseTextConfig : AWEBaseApiModel

@property (copy, nonatomic) NSString *textContent;
@property (copy, nonatomic) NSNumber *textSize;
@property (retain, nonatomic) AWESearchMerchandiseBackgroundColor *textColor;
@property (nonatomic) BOOL isBold;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

@class NSString, NSNumber, NSArray;

@interface BDPCDDynamicCardUIPropsPriceModel : BDPCDDynamicCardUIPropsModel

@property (copy, nonatomic) NSString *currency;
@property (nonatomic) long long priceType;
@property (retain, nonatomic) NSNumber *filledDecimal;
@property (nonatomic) BOOL strikethrough;
@property (copy, nonatomic) NSString *textContent;
@property (copy, nonatomic) NSString *color;
@property (nonatomic) double fontSize;
@property (copy, nonatomic) NSArray *margin;
@property (copy, nonatomic) NSArray *padding;

- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end

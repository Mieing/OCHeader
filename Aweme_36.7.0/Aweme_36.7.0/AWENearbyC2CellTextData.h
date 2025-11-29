@class UIColor, UIFont, NSString;

@interface AWENearbyC2CellTextData : AWEBaseApiModel

@property (readonly, nonatomic) BOOL textConfigEnable;
@property (readonly, nonatomic) UIColor *color;
@property (readonly, nonatomic) UIFont *font;
@property (readonly, nonatomic) BOOL textConfigEnable;
@property (readonly, nonatomic) UIColor *color;
@property (readonly, nonatomic) UIFont *font;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *textColor;
@property (nonatomic) double textDegree;
@property (nonatomic) BOOL isBold;
@property (nonatomic) long long textSize;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end

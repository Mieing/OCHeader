@class NSString;

@interface CJPayDeskTheme : JSONModel <NSCoding>

@property (copy, nonatomic) NSString *bgColorString;
@property (copy, nonatomic) NSString *fontColorString;
@property (copy, nonatomic) NSString *confirmButtonShapeStr;
@property (copy, nonatomic) NSString *amountColorStr;
@property (copy, nonatomic) NSString *tradeNameColorStr;
@property (copy, nonatomic) NSString *payTypeMarkColorStr;
@property (copy, nonatomic) NSString *payTypeMarkShapeStr;
@property (copy, nonatomic) NSString *payTypeMarkStyleStr;
@property (copy, nonatomic) NSString *payTypeMsgColorStr;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (long long)confirmButtonShape;
- (id)amountColor;
- (id)disableBgColor;
- (id)tradeNameColor;
- (id)payTypeMarkColor;
- (long long)payTypeMarkShape;
- (id)payTypeMarkStyle;
- (id)payTypeMsgColor;
- (void).cxx_destruct;
- (id)bgColor;
- (id)fontColor;

@end

@class UIColor, NSString, GXTextTagModel, NSNumber;

@interface GXTextRangeModel : NSObject

@property (nonatomic) long long start;
@property (nonatomic) long long end;
@property (retain, nonatomic) NSNumber *topOffset;
@property (retain, nonatomic) NSNumber *rightOffset;
@property (retain, nonatomic) NSNumber *bottomOffset;
@property (retain, nonatomic) NSNumber *leftOffset;
@property (retain, nonatomic) NSNumber *underline;
@property (retain, nonatomic) NSNumber *letterSpacing;
@property (copy, nonatomic) NSString *fontSize;
@property (copy, nonatomic) NSString *fontWeight;
@property (copy, nonatomic) NSString *fontFamily;
@property (retain, nonatomic) NSNumber *strike;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) NSNumber *offset;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) NSNumber *strokeWidth;
@property (retain, nonatomic) UIColor *strokeColor;
@property (retain, nonatomic) NSNumber *cornerRadius;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) GXTextTagModel *tag;

- (void)setupWithDic:(id)a0;
- (id)initWithDic:(id)a0;
- (void).cxx_destruct;

@end

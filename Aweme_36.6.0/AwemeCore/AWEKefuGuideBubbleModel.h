@class NSString, NSNumber;

@interface AWEKefuGuideBubbleModel : AWEBaseBizConfigModel

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *direction;
@property (retain, nonatomic) NSNumber *fontSize;
@property (retain, nonatomic) NSString *textColor;
@property (retain, nonatomic) NSString *bgColor;
@property (retain, nonatomic) NSString *borderColor;
@property (retain, nonatomic) NSNumber *borderSize;
@property (retain, nonatomic) NSNumber *distance;
@property (retain, nonatomic) NSNumber *showArrow;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isValidWithError:(id *)a0;

@end

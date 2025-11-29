@class NSString;

@interface AWESearchEpidemicStatisticItemModel : AWEBaseApiModel

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *numberText;
@property (retain, nonatomic) NSString *colorString;
@property (retain, nonatomic) NSString *fontSize;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

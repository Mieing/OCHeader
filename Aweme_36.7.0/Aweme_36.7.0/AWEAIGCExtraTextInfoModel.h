@class NSNumber, NSString, NSArray;

@interface AWEAIGCExtraTextInfoModel : AWEBaseBizConfigModel

@property (retain, nonatomic) NSNumber *align;
@property (retain, nonatomic) NSNumber *baseStyle;
@property (copy, nonatomic) NSString *textColor;
@property (copy, nonatomic) NSString *strokeColor;
@property (copy, nonatomic) NSString *backgroundColor;
@property (copy, nonatomic) NSString *fontId;
@property (copy, nonatomic) NSString *templateId;
@property (copy, nonatomic) NSString *speakerId;
@property (copy, nonatomic) NSString *atomic;
@property (retain, nonatomic) NSArray *pos;
@property (retain, nonatomic) NSArray *sizeRatio;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

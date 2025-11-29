@class NSString, AWESSUCColorModel;

@interface AWESSUCTextModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) AWESSUCColorModel *textColor;
@property (nonatomic) double fontSize;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

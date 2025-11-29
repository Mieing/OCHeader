@class NSString;

@interface AWECodeGenAnchorTextStyleModel : AWEBaseDataModel

@property (nonatomic) int maxLen;
@property (nonatomic) int fontSize;
@property (copy, nonatomic) NSString *fontColor;
@property (nonatomic) long long bold;
@property (nonatomic) long long ellipsis;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

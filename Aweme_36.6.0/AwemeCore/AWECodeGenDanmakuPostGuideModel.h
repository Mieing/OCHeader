@class NSString;

@interface AWECodeGenDanmakuPostGuideModel : AWEBaseDataModel

@property (nonatomic) int offset;
@property (copy, nonatomic) NSString *text;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

@class NSString;

@interface ACCAIGCUGCFusionCreationToolsPlaceholderTextModel : AWEBaseBizConfigModel

@property (copy, nonatomic) NSString *shortWord;
@property (copy, nonatomic) NSString *fullWord;
@property (copy, nonatomic) NSString *shortWordWithEmoji;
@property (readonly, copy, nonatomic) NSString *showText;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

@interface AWECodeGenDanmakuTextStyleModel : AWEBaseDataModel

@property (nonatomic) long long start;
@property (nonatomic) long long length;
@property (nonatomic) BOOL underline;

+ (id)JSONKeyPathsByPropertyKey;

@end

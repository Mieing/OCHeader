@class NSString;

@interface AWECodeGenDanmakuIconStyleModel : AWEBaseDataModel

@property (nonatomic) long long iconIndex;
@property (copy, nonatomic) NSString *iconUrl;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

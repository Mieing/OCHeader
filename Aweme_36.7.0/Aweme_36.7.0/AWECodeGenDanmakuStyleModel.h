@class AWECodeGenDanmakuTextStyleModel, AWECodeGenDanmakuIconStyleModel;

@interface AWECodeGenDanmakuStyleModel : AWEBaseDataModel

@property (nonatomic) long long source;
@property (retain, nonatomic) AWECodeGenDanmakuTextStyleModel *textStyleModel;
@property (retain, nonatomic) AWECodeGenDanmakuIconStyleModel *iconStyleModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

@class NSString;

@interface AWECodeGenDanmakuInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *danmakuId;
@property (nonatomic) long long offset;
@property (nonatomic) long long status;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) int actionType;
@property (nonatomic) int danmakuNoticeType;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

@class NSString;

@interface AWEIMCodeGenConsecutiveChatRelationInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *type;
@property (nonatomic) long long createTime;
@property (nonatomic) long long consecutiveChatCreateTime;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

@class NSString;

@interface AWECodeGenAiFollowVideoModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *effectId;
@property (nonatomic) long long seedVideoType;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

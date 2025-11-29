@class NSString;

@interface IESIMCodeGenWechatCaLinkModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *wechatCaId;
@property (copy, nonatomic) NSString *avatarUrl;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

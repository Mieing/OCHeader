@class NSString;

@interface IESIMCodeGenAwemeUserModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *shortId;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *accountCertInfo;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

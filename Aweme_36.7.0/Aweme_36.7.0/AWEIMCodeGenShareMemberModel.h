@class AWEIMUser, NSString, NSDictionary;

@interface AWEIMCodeGenShareMemberModel : AWEBaseDataModel <NSSecureCoding>

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) AWEIMUser *user;
@property (nonatomic) int convType;
@property (nonatomic) long long uid;
@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *convId;
@property (nonatomic) int bizType;
@property (copy, nonatomic) NSDictionary *extra;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end

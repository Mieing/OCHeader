@class NSString;

@interface AWECodeGenCreateAwemeTextExtraModel : AWEBaseDataModel

@property (nonatomic) int type;
@property (nonatomic) int start;
@property (nonatomic) int end;
@property (nonatomic) long long uid;
@property (nonatomic) long long hashtagId;
@property (copy, nonatomic) NSString *secUid;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

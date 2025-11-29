@interface AWEIMCodeGenShareSourceAttrModel : AWEBaseDataModel

@property (nonatomic) long long mode;
@property (nonatomic) BOOL canRetry;
@property (nonatomic) long long reqInterval;

+ (id)JSONKeyPathsByPropertyKey;

@end

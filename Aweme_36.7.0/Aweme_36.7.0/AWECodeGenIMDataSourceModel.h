@class NSString;

@interface AWECodeGenIMDataSourceModel : AWEBaseDataModel

@property (nonatomic) int convType;
@property (copy, nonatomic) NSString *convId;
@property (nonatomic) long long convShortId;
@property (nonatomic) long long messageId;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

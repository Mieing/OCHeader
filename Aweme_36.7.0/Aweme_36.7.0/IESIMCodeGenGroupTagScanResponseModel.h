@class NSDictionary;

@interface IESIMCodeGenGroupTagScanResponseModel : AWEBaseResponseModel

@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long nextCursor;
@property (copy, nonatomic) NSDictionary *userTag;
@property (copy, nonatomic) NSDictionary *tagConf;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

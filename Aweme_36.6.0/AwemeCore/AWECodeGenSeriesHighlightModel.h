@class NSString;

@interface AWECodeGenSeriesHighlightModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *parentItemId;
@property (nonatomic) long long parentItemCreateTime;
@property (nonatomic) long long startTimeMsec;
@property (copy, nonatomic) NSString *authToken;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

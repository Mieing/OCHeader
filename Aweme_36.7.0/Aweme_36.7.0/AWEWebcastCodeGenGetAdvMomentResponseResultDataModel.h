@class NSString, NSDictionary;

@interface AWEWebcastCodeGenGetAdvMomentResponseResultDataModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *itemId;
@property (nonatomic) int requestRatio;
@property (nonatomic) double realtimeScore;
@property (nonatomic) double userScore;
@property (nonatomic) double contentScore;
@property (nonatomic) double userCrossContentScore;
@property (nonatomic) double totalScore;
@property (copy, nonatomic) NSDictionary *extra;
@property (nonatomic) int errCode;
@property (copy, nonatomic) NSString *errMsg;
@property (copy, nonatomic) NSString *logId;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

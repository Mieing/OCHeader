@class NSString;

@interface AWEWebcastCodeGenSendAdLogResponseResultDataModel : AWEBaseDataModel

@property (nonatomic) int errCode;
@property (copy, nonatomic) NSString *errMsg;
@property (copy, nonatomic) NSString *logId;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

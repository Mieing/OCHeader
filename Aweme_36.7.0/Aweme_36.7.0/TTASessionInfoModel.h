@class NSString;

@interface TTASessionInfoModel : TTADataRespModel

@property (copy, nonatomic) NSString *sessionSecUid;
@property (copy, nonatomic) NSString *tokenSecUid;
@property (copy, nonatomic) NSString *errorDescription;
@property (copy, nonatomic) NSString *errorName;
@property (nonatomic) long long tokenErrorCode;
@property (nonatomic) long long sessionErrorCode;

+ (id)tta_modelCustomPropertyMapper;

- (void).cxx_destruct;

@end

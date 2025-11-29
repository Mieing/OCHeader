@class NSString, NSDictionary;

@interface TTACheckSensitiveInfoModel : NSObject

@property (nonatomic) long long errorCode;
@property (copy, nonatomic) NSString *descriptionMsg;
@property (copy, nonatomic) NSDictionary *matchResult;

+ (id)tta_modelCustomPropertyMapper;

- (void).cxx_destruct;

@end

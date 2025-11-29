@class NSString, NSDictionary;

@interface BDPSchemaCheckResponseModel : NSObject

@property (nonatomic) long long errNo;
@property (nonatomic) long long action;
@property (copy, nonatomic) NSString *toast;
@property (nonatomic) BOOL isReportPoint;
@property (copy, nonatomic) NSDictionary *logExtra;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end

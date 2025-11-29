@class NSString, NSDictionary;

@interface QQApiResultObject : QQApiObject

@property (copy, nonatomic) NSString *error;
@property (copy, nonatomic) NSString *errorDescription;
@property (copy, nonatomic) NSString *extendInfo;
@property (copy, nonatomic) NSDictionary *otherInfo;

- (void).cxx_destruct;

@end

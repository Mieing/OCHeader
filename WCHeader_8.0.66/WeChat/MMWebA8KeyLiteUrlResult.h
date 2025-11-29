@class NSDictionary, NSString, MMWebOptimizationAuthLiteControlData;

@interface MMWebA8KeyLiteUrlResult : MMObject

@property (nonatomic) unsigned int scene;
@property (nonatomic) long long subBizScene;
@property (retain, nonatomic) MMWebOptimizationAuthLiteControlData *authControlData;
@property (retain, nonatomic) NSDictionary *httpHeader;
@property (copy, nonatomic) NSString *extInfo;
@property (copy, nonatomic) NSString *prefetchId;

- (void).cxx_destruct;

@end

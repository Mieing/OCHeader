@class NSString, NSArray, FantaRequestConfigModel;

@interface FantaRequestInjectFeatureConfig : NSObject

@property (copy, nonatomic) NSString *requestPath;
@property (retain, nonatomic) FantaRequestConfigModel *requestConfig;
@property (copy, nonatomic) NSArray *featureConfigs;
@property (nonatomic) BOOL usePreRequestInterceptor;
@property (copy, nonatomic) NSString *injectConfigKey;

- (void).cxx_destruct;

@end

@class NSString;

@interface FantaFeatureConfigModel : NSObject

@property (copy, nonatomic) NSString *featureKey;
@property (copy, nonatomic) NSString *uploadFeatureKey;
@property (copy, nonatomic) NSString *featureHandler;

+ (id)createWithConfig:(id)a0;

- (BOOL)shouldConvertToJsonString;
- (void).cxx_destruct;

@end

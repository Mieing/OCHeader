@class NSString, NSArray;

@interface AWEGrouponNegativeFeedbackSetting : AWEBaseApiModel

@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *lynxUrl;
@property (copy, nonatomic) NSArray *negativeFeedbackOptions;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end

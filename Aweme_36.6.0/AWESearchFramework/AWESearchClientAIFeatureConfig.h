@class NSString;

@interface AWESearchClientAIFeatureConfig : NSObject

@property (copy, nonatomic) NSString *businessName;
@property (copy, nonatomic) NSString *featureName;
@property (copy, nonatomic) id /* block */ registerBlock;

- (void).cxx_destruct;

@end

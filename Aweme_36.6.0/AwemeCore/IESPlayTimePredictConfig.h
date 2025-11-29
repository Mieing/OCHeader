@class NSString;

@interface IESPlayTimePredictConfig : NSObject

@property (copy, nonatomic) NSString *sceneName;
@property (copy, nonatomic) NSString *packageURLString;
@property (copy, nonatomic) NSString *businessName;
@property (nonatomic) long long videoCount;

+ (id)configWithDictionary:(id)a0;

- (void).cxx_destruct;

@end

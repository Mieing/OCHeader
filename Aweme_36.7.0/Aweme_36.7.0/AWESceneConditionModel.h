@class NSString;

@interface AWESceneConditionModel : NSObject

@property (copy, nonatomic) NSString *paramName;
@property (copy, nonatomic) NSString *conditionValue;
@property (copy, nonatomic) NSString *operators;

- (void).cxx_destruct;

@end

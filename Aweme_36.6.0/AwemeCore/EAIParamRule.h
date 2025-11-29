@class NSArray, NSString;
@protocol EAIValueProcessor;

@interface EAIParamRule : NSObject

@property (retain, nonatomic) NSArray *filters;
@property (copy, nonatomic) NSString *paramName;
@property (copy, nonatomic) NSString *inputName;
@property (retain, nonatomic) id<EAIValueProcessor> valueProcessor;

- (void).cxx_destruct;

@end

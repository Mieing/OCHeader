@class NSString, NSDictionary;

@interface IESLLTempoEffectModel : NSObject

@property (copy, nonatomic) NSString *componentID;
@property (copy, nonatomic) NSDictionary *data;
@property (copy, nonatomic) NSDictionary *globalProps;
@property (nonatomic) long long effectSource;

- (void).cxx_destruct;

@end

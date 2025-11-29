@class NSString;

@interface AnchorDisplayControlV2 : GPBMessage

@property (nonatomic) int moduleType;
@property (nonatomic) BOOL hasModuleType;
@property (nonatomic) int strategyType;
@property (nonatomic) BOOL hasStrategyType;
@property (copy, nonatomic) NSString *value;
@property (nonatomic) BOOL hasValue;

+ (id)descriptor;

- (id)value;
- (int)strategyType;
- (int)moduleType;

@end

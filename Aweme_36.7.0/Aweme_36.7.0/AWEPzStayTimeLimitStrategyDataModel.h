@class NSString;

@interface AWEPzStayTimeLimitStrategyDataModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long timeLimit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isValid;

@end

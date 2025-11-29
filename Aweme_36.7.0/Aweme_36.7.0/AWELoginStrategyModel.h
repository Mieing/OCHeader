@class NSString, AWELoginStrategyMethodModel;

@interface AWELoginStrategyModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWELoginStrategyMethodModel *loginModel;
@property (retain, nonatomic) AWELoginStrategyMethodModel *logoutModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logoutModelJSONTransformer;
+ (id)loginModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

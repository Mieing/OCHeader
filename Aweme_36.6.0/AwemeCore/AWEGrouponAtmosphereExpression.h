@class AWEGrouponSingleProductExpression, NSString;

@interface AWEGrouponAtmosphereExpression : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEGrouponSingleProductExpression *singleProductExpression;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
